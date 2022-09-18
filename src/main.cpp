#include <iostream>

#include "helpers/cli/CommandLineParser.hpp"

int main(int argc, char** argv) {
    helpers::cli::CommandLineParser parser;
    if (!parser.parse(argc, argv)) {
        std::cerr << "Invalid CLI Options provided." << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Welcome to TicTacToe CPP!\n";

    return EXIT_SUCCESS;
}
