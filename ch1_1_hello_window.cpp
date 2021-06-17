#include "glutils.h"

int main()
{
    GLFWwindow *window = initGL();

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glClearColor(0.375, 0.8125, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
    }

    // Terminate GLFW, clearing any resources allocated by GLFW.
    glfwTerminate();
    return 0;
}