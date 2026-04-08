cmake_minimum_required(VERSION 3.20)
project(YoshisCookieRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)

# ---- nesrecomp pin check ----
if(EXISTS "${CMAKE_SOURCE_DIR}/nesrecomp.pin")
    file(STRINGS "${CMAKE_SOURCE_DIR}/nesrecomp.pin" _PIN_LINES)
    set(NESRECOMP_PIN_BRANCH "")
    set(NESRECOMP_PIN_SHA "")
    foreach(_line IN LISTS _PIN_LINES)
        if(_line MATCHES "^[ \t]*#")
        elseif(_line MATCHES "^[ \t]*branch[ \t]*=[ \t]*(.*)$")
            string(STRIP "${CMAKE_MATCH_1}" NESRECOMP_PIN_BRANCH)
        elseif(_line MATCHES "^[ \t]*sha[ \t]*=[ \t]*(.*)$")
            string(STRIP "${CMAKE_MATCH_1}" NESRECOMP_PIN_SHA)
        endif()
    endforeach()
    if(NESRECOMP_PIN_SHA)
        set(NESRECOMP_EXPECTED_SHA "${NESRECOMP_PIN_SHA}")
        set(NESRECOMP_PIN_SOURCE "explicit sha in nesrecomp.pin")
    else()
        if(NOT NESRECOMP_PIN_BRANCH)
            set(NESRECOMP_PIN_BRANCH "origin/master")
        endif()
        execute_process(
            COMMAND git -C "${NESRECOMP_ROOT}" rev-parse "${NESRECOMP_PIN_BRANCH}"
            OUTPUT_VARIABLE NESRECOMP_EXPECTED_SHA OUTPUT_STRIP_TRAILING_WHITESPACE
            RESULT_VARIABLE _NESRECOMP_RP_RC)
        if(NOT _NESRECOMP_RP_RC EQUAL 0)
            message(FATAL_ERROR "nesrecomp pin: failed to resolve branch '${NESRECOMP_PIN_BRANCH}' in ${NESRECOMP_ROOT}.")
        endif()
        set(NESRECOMP_PIN_SOURCE "tip of ${NESRECOMP_PIN_BRANCH}")
    endif()
    execute_process(
        COMMAND git -C "${NESRECOMP_ROOT}" rev-parse HEAD
        OUTPUT_VARIABLE NESRECOMP_ACTUAL_SHA OUTPUT_STRIP_TRAILING_WHITESPACE
        RESULT_VARIABLE _NESRECOMP_HEAD_RC)
    if(NOT _NESRECOMP_HEAD_RC EQUAL 0)
        message(FATAL_ERROR "nesrecomp pin check: failed to read HEAD of ${NESRECOMP_ROOT}.")
    endif()
    if(NOT NESRECOMP_ACTUAL_SHA STREQUAL NESRECOMP_EXPECTED_SHA)
        message(FATAL_ERROR
            "nesrecomp pin mismatch.\n"
            "  expected: ${NESRECOMP_EXPECTED_SHA}  (from ${NESRECOMP_PIN_SOURCE})\n"
            "  actual:   ${NESRECOMP_ACTUAL_SHA}  (HEAD of ${NESRECOMP_ROOT})\n"
            "\nTo align: git -C ${NESRECOMP_ROOT} checkout ${NESRECOMP_EXPECTED_SHA}\n"
            "Or update ${CMAKE_SOURCE_DIR}/nesrecomp.pin")
    endif()
    message(STATUS "nesrecomp pin OK: ${NESRECOMP_EXPECTED_SHA} (${NESRECOMP_PIN_SOURCE})")
endif()

include(${NESRECOMP_ROOT}/runner/runner.cmake)

# ---- Nestopia Oracle (optional) ----
option(ENABLE_NESTOPIA_ORACLE "Build with Nestopia emulator oracle for verify mode" ON)

if(ENABLE_NESTOPIA_ORACLE)
    include(${CMAKE_SOURCE_DIR}/nestopia_cmake.cmake)
endif()

list(APPEND CMAKE_PREFIX_PATH "${NESRECOMP_ROOT}/runner/external/SDL2/cmake")
find_package(SDL2 REQUIRED)

add_executable(YoshisCookieRecomp
    ${NESRECOMP_RUNNER_SOURCES}
    extras.c
    nes_snapshot.c
    verify_mode.c
    recomp_stack.c
    generated/yoshis-cookie_full.c
    generated/yoshis-cookie_dispatch.c
)

target_include_directories(YoshisCookieRecomp PRIVATE
    ${NESRECOMP_RUNNER_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}
    ${SDL2_INCLUDE_DIRS}
)

target_link_libraries(YoshisCookieRecomp PRIVATE ${SDL2_LIBRARIES})

target_compile_definitions(YoshisCookieRecomp PRIVATE RECOMP_STACK_TRACKING NES_TRACE_STACK_WRITES)

if(ENABLE_NESTOPIA_ORACLE)
    target_sources(YoshisCookieRecomp PRIVATE
        nestopia_bridge.cpp
    )
    target_link_libraries(YoshisCookieRecomp PRIVATE nestopia_core)
    target_compile_definitions(YoshisCookieRecomp PRIVATE ENABLE_NESTOPIA_ORACLE)
    target_include_directories(YoshisCookieRecomp PRIVATE
        ${CMAKE_SOURCE_DIR}/nestopia-core/libretro
        ${CMAKE_SOURCE_DIR}/nestopia-core/libretro/libretro-common/include
    )
endif()

if(WIN32)
    target_link_libraries(YoshisCookieRecomp PRIVATE ws2_32)
    add_custom_command(TARGET YoshisCookieRecomp POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${NESRECOMP_ROOT}/runner/external/SDL2/lib/x64/SDL2.dll"
            "$<TARGET_FILE_DIR:YoshisCookieRecomp>"
    )
endif()

if(MSVC)
    target_compile_options(YoshisCookieRecomp PRIVATE /W3 /WX-)
    target_compile_options(YoshisCookieRecomp PRIVATE /wd4102)
endif()
