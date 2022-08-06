# sdl2-cmake-quick-start

This project contains base stuff, that allows to launch SDL2 in Windows by using CMake and MinGW.

It also supports launch by using IDEs, such as CLion.

## How to launch
1. Download [SDL2.dll](https://www.libsdl.org/download-2.0.php) for x86.
2. Move it to folder, that is in PATH variable, this file.
3. Launch this project (by using CLion or CLI)

### How to launch via CLI
```bash
cmake -G "MinGW Makefiles"
cmake --build .
sdl2-cmake-quick-start.exe
```

## TODO
1. Try to move SDL2.dll to this repo
2. Find a way to link SDL2Test library
