# LearnOpenGLMac

From: [LearnOpenGL-CN](https://learnopengl-cn.readthedocs.io/zh/latest/)

Enviroment: 
- Mac
- vscode
- glew
- glfw
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