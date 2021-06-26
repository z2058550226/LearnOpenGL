# LearnOpenGL

From: [LearnOpenGL-CN](https://learnopengl-cn.readthedocs.io/zh/latest/)

Enviroment: 
- Mac
- vscode
- glew
- glfw
- SOIL
- framework OpenGL

### Some Note
To compile the glfw for MinGW:
```bash
cd <glfw dir>
mkdir build
cd build

# Use -G to choose the generator in cmake 
cmake -DBUILD_SHARED_LIBS=ON .. -G "MinGW Makefiles"
mingw32-make
```

A simple open source C/C++ library manager on windows: [MSYS2](https://packages.msys2.org)
- The include path: <path of MSYS2>/mingw64/include
- The library path: <path of MSYS2>/mingw64/lib

To compile the SOIL for mac:

1. First clone the [SOIL For Mac](https://github.com/DeVaukz/SOIL) repo.
2. Remove the 32 bit config from CMakeLists.txt:
```cmake
IF(APPLE)
    SET(CMAKE_OSX_ARCHITECTURES x86_64)
    SET(CMAKE_XCODE_ATTRIBUTE_VALID_ARCHS "x86_64")
```
3. Build the SOIL with Unix Makefile generator:
```bash
cd <SOIL>/build
cmake .. -G "Unix Makefiles"
make
make install
```