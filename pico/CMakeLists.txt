#Set the mimum required version of CMake
cmake_minimum_required(VERSION 3.12)

#Pull in SDK (must be before project)
include(pico_sdk_import.cmake)

#Set the project name, the programming language
project(MCP47X6_PICO C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

#Initialize the SDK
pico_sdk_init()

add_executable(blink blink.c)
target_link_libraries(blink pico_stdlib)
pico_enable_stdio_usb(blink 1)
pico_enable_stdio_uart(blink 0)
pico_add_extra_outputs(blink)