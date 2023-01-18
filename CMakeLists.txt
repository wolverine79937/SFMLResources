cmake_minimum_required(VERSION 3.2)

project(resources
        VERSION 0.0.0
        LANGUAGES CXX
)

set(EXECUTABLE_NAME "resources")
set(resources_VERSION_MAJOR 0)
set(resources_VERSION_MINOR 1)

add_compile_options("-I.")

add_link_options("-F${SFML_DIR}/lib")
link_libraries("-lsfml-graphics")
link_libraries("-lsfml-system")
link_libraries("-lsfml-window")

file(GLOB_RECURSE src src/*.cpp src/*.hh)

add_executable(${EXECUTABLE_NAME} "${src}")