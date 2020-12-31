cmake_minimum_required(VERSION 3.17)
project(hangman_cpp)

set(CMAKE_CXX_STANDARD 17)
add_compile_options(/EHsc)
add_executable(hangman_cpp main.cpp game.cpp game.h word.cpp word.h gallow.cpp gallow.h NoWordlistException.cpp NoWordlistException.h)