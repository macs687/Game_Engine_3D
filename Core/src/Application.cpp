#include "Core/Application.hpp"


namespace Engine{
    Application::Application(){

    };


    Application::~Application(){

    };


    int Application::start(uint window_width, uint window_height, const char* title){
        GLFWwindow* window;

        /* Initialize the library */
        if (!glfwInit()){
            return -1;
        }
          

        /* Create a windowed mode window and its OpenGL context */
        window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
        if (!window){
            glfwTerminate();
            return -1;
        }

        /* Make the window's context current */
        glfwMakeContextCurrent(window);

        /* Loop until the user closes the window */
        while (!glfwWindowShouldClose(window)){
            /* Render here */
            //glClear(GL_COLOR_BUFFER_BIT);

            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();

            on_update();
        }

        glfwTerminate();
        return 0;
    };
}