/*
 * extras.c — Yoshi's Cookie game-specific runner hooks
 * Implements game_extras.h.
 * Features: TCP debug server, verify mode via Nestopia oracle.
 */
#include "game_extras.h"
#include "nes_runtime.h"
#include "debug_server.h"
#include "verify_mode.h"
#ifdef ENABLE_NESTOPIA_ORACLE
#include "nestopia_bridge.h"
#endif
#include <SDL.h>
#include <stdio.h>
#include <string.h>

/* Globals expected by the runner framework */
const char *g_rom_path_for_extras = NULL;
int         g_watchdog_triggered  = 0;
uint32_t    g_watchdog_frame      = 0;
const char *g_watchdog_stack_dump = "";

uint32_t game_get_expected_crc32(void) { return 0x52B58732u; }

const char *game_get_name(void) { return "Yoshi's Cookie"; }

void game_on_init(void) {
    int port = (g_run_mode == RUN_MODE_EMULATED) ? 4371 : 4370;
    debug_server_init(port);

    if (g_run_mode != RUN_MODE_NATIVE && g_rom_path_for_extras) {
        verify_mode_init(g_rom_path_for_extras);
    }

    /* Auto-register followers on stack-page addresses where native has $97/$22
     * garbage and emu has tile-index VRAM update data. F4C0 reads stack page
     * as VRAM buffer, so we want to find who populates this buffer on native. */
    debug_server_add_follower(0x0100, -1);
    debug_server_add_follower(0x0101, -1);
    debug_server_add_follower(0x0102, -1);
    debug_server_add_follower(0x0103, -1);
    debug_server_add_follower(0x0105, -1);
    debug_server_add_follower(0x0107, -1);
    debug_server_add_follower(0x0108, -1);
}

void game_on_frame(uint64_t frame_count) { (void)frame_count; }

void game_post_nmi(uint64_t frame_count) { (void)frame_count; }

int game_handle_arg(const char *key, const char *val) {
    if (strcmp(key, "--verify") == 0) {
        g_run_mode = RUN_MODE_VERIFY;
        return 1;
    }
    if (strcmp(key, "--emulated") == 0) {
        g_run_mode = RUN_MODE_EMULATED;
        return 1;
    }
    (void)val;
    return 0;
}

const char *game_arg_usage(void) {
    return "  --verify     Run both native + Nestopia, compare each frame\n"
           "  --emulated   Run Nestopia only (reference mode)\n";
}

void game_run_nmi(void) {
    verify_mode_run_nmi();
}

void game_run_main(void) {
    if (g_run_mode == RUN_MODE_EMULATED) {
#ifdef ENABLE_NESTOPIA_ORACLE
        printf("[Emulated] Nestopia driving main loop\n");
        static uint32_t emu_argb[256 * 240];
        extern void runner_present_framebuf(const uint32_t *argb_buf);

        for (;;) {
            SDL_Event ev;
            while (SDL_PollEvent(&ev)) {
                if (ev.type == SDL_QUIT) exit(0);
                if (ev.type == SDL_KEYDOWN && ev.key.keysym.sym == SDLK_ESCAPE) exit(0);
            }
            const uint8_t *keys = SDL_GetKeyboardState(NULL);
            uint8_t btn = 0;
            if (keys[SDL_SCANCODE_Z])      btn |= 0x80;
            if (keys[SDL_SCANCODE_X])      btn |= 0x40;
            if (keys[SDL_SCANCODE_TAB])    btn |= 0x20;
            if (keys[SDL_SCANCODE_RETURN]) btn |= 0x10;
            if (keys[SDL_SCANCODE_UP])     btn |= 0x08;
            if (keys[SDL_SCANCODE_DOWN])   btn |= 0x04;
            if (keys[SDL_SCANCODE_LEFT])   btn |= 0x02;
            if (keys[SDL_SCANCODE_RIGHT])  btn |= 0x01;
            g_controller1_buttons = btn;

            debug_server_poll();

            int ovr = debug_server_get_input_override();
            if (ovr >= 0) g_controller1_buttons = (uint8_t)ovr;

            nestopia_bridge_run_frame(g_controller1_buttons);
            nestopia_bridge_get_framebuf_argb(emu_argb);
            runner_present_framebuf(emu_argb);

            nestopia_bridge_get_ram(g_ram);
            g_frame_count++;
            debug_server_record_frame();

            SDL_Delay(16);
        }
#else
        fprintf(stderr, "[Error] Nestopia not compiled in\n");
        func_RESET();
#endif
    } else {
        func_RESET();
    }
}

int game_dispatch_override(uint16_t addr) {
    if (addr == 0x8104) {
        extern int g_current_bank;
#ifdef RECOMP_STACK_TRACKING
        extern const char *g_recomp_stack[];
        extern int g_recomp_stack_top;
        const char *top = (g_recomp_stack_top > 0) ? g_recomp_stack[g_recomp_stack_top - 1] : "(none)";
#else
        const char *top = "";
#endif
        static int trap_count = 0;
        if (trap_count < 10) {
            fprintf(stderr, "[DISPATCH $8104] bank=%d frame=%llu fn=%s S=0x%02X\n",
                    g_current_bank, (unsigned long long)g_frame_count, top, (unsigned)g_cpu.S);
            fflush(stderr);
            trap_count++;
        }
    }
    (void)addr;
    return 0;
}

uint8_t game_ram_read_hook(uint16_t pc, uint16_t addr, uint8_t val) {
    (void)pc; (void)addr;
    return val;
}

void game_fill_frame_record(void *record) { (void)record; }

int game_handle_debug_cmd(const char *cmd, int id, const char *json) {
    (void)cmd; (void)id; (void)json;
    return 0;
}
