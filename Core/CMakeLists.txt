cmake_minimum_required(VERSION 3.28)

set(ENGINE_PROJECT_NAME Core)

set(ENGINE_PUBLIC_INCLUDES 
    includes/Core/Application.hpp
)

set(ENGINE_PRIVATE_SOURCE 
    src/Application.cpp    
)

add_library(${ENGINE_PROJECT_NAME} STATIC
    ${ENGINE_PUBLIC_INCLUDES}
    ${ENGINE_PRIVATE_SOURCE}
)

target_include_directories(${ENGINE_PROJECT_NAME} PUBLIC includes)
target_compile_features(${ENGINE_PROJECT_NAME} PUBLIC cxx_std_17)

add_subdirectory(../external/glfw ${CMAKE_CURRENT_BINARY_DIR}/glfw)
target_link_libraries(${ENGINE_PROJECT_NAME} PRIVATE glfw)