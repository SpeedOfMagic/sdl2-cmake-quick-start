# sdl2-cmake-quick-start

This project contains base stuff, that allows to launch 64-bit SDL2 in Windows by using CMake and MinGW.

It also supports launch by using IDEs, such as CLion.

## How to launch
1. Download [SDL2.dll](https://www.libsdl.org/download-2.0.php) for x64.
2. Move this file to folder that is in PATH variable.
3. Launch this project (by using CLion or CLI)

### How to launch via CLI
```bash
cmake -G "MinGW Makefiles"
cmake --build .
sdl2-cmake-quick-start.exe
```

If you wish to launch x86 version, then you have to:
1. Use SDL2.dll for x86
2. Download SDL2-devel-2.0.22-mingw.zip from official site
3. Extract folder with x86 files from zip folder
4. Replace folders include and lib in {repo folder}\SDL2


## TODO
1. Try to move SDL2.dll to this repo
2. Find a way to link SDL2Test library
