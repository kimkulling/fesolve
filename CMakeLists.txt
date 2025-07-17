cmake_minimum_required(VERSION 3.10)

# Projektname und Sprache
project(fesolve LANGUAGES CXX)

# C++ Standard setzen (z. B. C++17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Executable definieren
add_executable(fesolve src/main.cpp)

