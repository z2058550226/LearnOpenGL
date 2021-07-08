## 变换

矩阵作用顺序：后添加的变换矩阵在结果上是先作用于结果。比如下面的矩阵：
```cpp
glm::mat4 trans(1.0f);
trans = glm::rotate(trans, (GLfloat)(glfwGetTime() * glm::radians(90.0f)), glm::vec3(0.0f, 0.0f, 1.0f));
trans = glm::translate(trans, glm::vec3(0.5f, -0.5f, 0.0f));
```
在结果上，画面会先向右下移动0.5，然后再绕z轴正方向旋转。
