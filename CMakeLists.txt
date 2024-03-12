cmake_minimum_required(VERSION 3.28)

set(PROJECT_NAME Game_Engine_3D)

project(${PROJECT_NAME})

add_subdirectory(Core)
add_subdirectory(Editor)

set_property(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT Editor)