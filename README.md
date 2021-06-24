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
# In cmder use choco to install make
csudo choco install make

cd <glfw dir>
mkdir build
cd build

# Use -G to choose the generator in cmake 
cmake .. -G "MinGW Makefiles"
make
```