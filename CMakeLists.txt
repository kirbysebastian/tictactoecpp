cmake_minimum_required(VERSION 3.16)

include(cmake/tictactoecpp.version.cmake)

set(CMAKE_CXX_STANDARD 20)

project(tictactoecpp-app LANGUAGES CXX VERSION ${TICTACTOE_CPP_VERSION})
message(STATUS "Configuring ${PROJECT_NAME}:${TICTACTOE_CPP_VERSION}")

add_subdirectory(src/helpers)

add_executable(tictactoecpp src/main.cpp)

target_link_libraries(tictactoecpp
    cli-lib
)

target_include_directories(tictactoecpp PRIVATE
    include
)
