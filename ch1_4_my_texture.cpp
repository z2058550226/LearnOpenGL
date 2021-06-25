#include "glutils.h"
#include "SOIL/SOIL.h"

int main()
{
    GLFWwindow *window = initGL();

    int width, height;
    unsigned char *image = SOIL_load_image("container.jpg", &width, &height, 0, SOIL_LOAD_RGB);

    GLuint texture;
    glGenTextures(1, &texture);

    glBindTexture(GL_TEXTURE_2D, texture);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, image);
    glGenerateMipmap(GL_TEXTURE_2D);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        glClearColor(0.375, 0.8125, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
    }

    glfwTerminate();
    return 0;
}