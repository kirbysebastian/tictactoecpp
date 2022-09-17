cmake_minimum_required(VERSION 3.16.0)

include(cmake/tictactoecpp.version.cmake)

set(CMAKE_CXX_STANDARD 20)

message(STATUS "VERSION: ${TICTACTOE_CPP_VERSION}")
project(tictactoecpp-app LANGUAGES CXX VERSION ${TICTACTOE_CPP_VERSION})
message(STATUS "Configuring ${PROJECT_NAME}:${TICTACTOE_CPP_VERSION}")

add_executable(tictactoecpp src/main.cpp)
