cmake_minimum_required(VERSION 3.24)

project(sdl2-cmake-quick-start)

link_directories(C:/mingw_dev_lib/lib)
find_library(SDL2 C:/mingw_dev_lib/lib)
find_library(SDL2main C:/mingw_dev_lib/lib)
include_directories(SDL2 C:/mingw_dev_lib/include/SDL2)

add_executable(sdl2-cmake-quick-start main.cpp)
target_link_libraries(sdl2-cmake-quick-start SDL2 SDL2main)
add_definitions(-DSDL_MAIN_HANDLED)