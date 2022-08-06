cmake_minimum_required(VERSION 3.22)

project(sdl2-cmake-quick-start)

# Link libraries to solve errors like "undefined reference to `SDL_Init'" 
link_directories(${PROJECT_SOURCE_DIR}/SDL2/lib)

# Include .h files in SDL to allow include <SDL.h>
include_directories(SDL2 ${PROJECT_SOURCE_DIR}/SDL2/include/SDL2)

add_executable(sdl2-cmake-quick-start main.cpp)

# Link this project and SDL libraries
target_link_libraries(sdl2-cmake-quick-start SDL2 SDL2main)

# Used to prevent "undefined reference to `WinMain@16'" errors
add_definitions(-DSDL_MAIN_HANDLED)