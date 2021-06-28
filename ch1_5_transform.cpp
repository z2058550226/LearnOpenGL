#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "glutils.h"

using namespace std;

int main()
{
    // GLFWwindow *window = initGL();

    // glm::vec4 vec(1.0f, 0.0f, 0.0f, 1.0f);
    // glm::mat4 trans(1.0f);
    // trans = glm::translate(trans, glm::vec3(1.0f, 1.0f, 0.0f));
    // vec = trans * vec;
    // std::cout << vec.x << vec.y << vec.z << std::endl;

    glm::mat4 trans(1.0f);
    trans = glm::rotate(trans, glm::radians(90.0f), glm::vec3(0.0f, 0.0f, 1.0f));
    trans = glm::scale(trans, glm::vec3(0.5f, 0.5f, 0.5f));

    // while (!glfwWindowShouldClose(window))
    // {
    //     glfwPollEvents();

    //     glClearColor(0.3, 0.8, 1.0, 1.0);
    //     glClear(GL_COLOR_BUFFER_BIT);

    //     glfwSwapBuffers(window);
    // }

    // glfwTerminate();
    return 0;
}