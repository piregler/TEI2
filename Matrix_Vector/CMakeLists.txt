cmake_minimum_required(VERSION 3.0.0)
project(Matrix_vector VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Matrix_vector main.cpp Matrix.cpp Vector.cpp Vector2D.cpp)

set(CMAKE_CXX_STANDARD 20)
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
