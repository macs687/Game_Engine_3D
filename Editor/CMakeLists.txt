cmake_minimum_required(VERSION 3.28)

set(EDITOR_PROJECT_NAME Editor)

add_executable(${EDITOR_PROJECT_NAME}
    src/main.cpp
)

target_link_libraries(${EDITOR_PROJECT_NAME} Core)
set_target_properties(${EDITOR_PROJECT_NAME} PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin/)                           