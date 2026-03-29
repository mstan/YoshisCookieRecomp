cmake_minimum_required(VERSION 3.20)
project(YoshisCookieRecomp C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(NESRECOMP_ROOT ${CMAKE_SOURCE_DIR}/nesrecomp)
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
