cmake_minimum_required(VERSION 3.26)
project(snake LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
        GIT_REPOSITORY https://github.com/SFML/SFML.git
        GIT_TAG 3.0.2
        GIT_SHALLOW ON
        EXCLUDE_FROM_ALL
        SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(snake src/main.cpp
        src/sprite.hpp
        src/globals.hpp
        src/map.hpp
        src/snake.hpp)
target_compile_features(snake PRIVATE cxx_std_17)
target_link_libraries(snake PRIVATE SFML::Graphics)