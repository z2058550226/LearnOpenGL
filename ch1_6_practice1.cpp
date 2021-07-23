#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "glutils.h"
#include <SOIL/SOIL.h>
#include "Shader.h"

using namespace std;

int main(){
    GLFWwindow * window = initGL();

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();

        

        glfwSwapBuffers(window);
    }
    
    glfwTerminate();
    return 0;
}