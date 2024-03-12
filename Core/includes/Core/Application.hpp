#pragma once

#include <iostream>
#include <GLFW/glfw3.h>


namespace Engine{
    typedef unsigned int uint;



    class Application{
    public:    
        Application();
        virtual ~Application();

        Application(const Application&) = delete;
        Application(Application&&) = delete;
        Application& operator=(const Application&) = delete;
        Application& operator=(Application&&) = delete;

        virtual int start(uint window_width, uint window_height, const char* title);

        virtual void on_update(){

        }; 
    };
}