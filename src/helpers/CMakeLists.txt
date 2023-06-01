
add_library(cli-lib
    cli/CommandLineParser.cpp
)

target_include_directories(cli-lib PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)