#include "CommandLineParser.hpp"

namespace helpers::cli {
CommandLineParser::CommandLineParser() {}

bool CommandLineParser::parse(const int argc, char** argv) {
    m_appname = argv[0];

    if (argc > 1) {
        return initOptions(argc, argv);
    }
    return true;
}

CommandLineOptionResult CommandLineParser::getOptions(const types::CommandLineOption option) {
    if (m_options.find(option) == m_options.end()) {
        return std::nullopt;
    }
    return CommandLineOptionResult{m_options[option]};
}

bool CommandLineParser::initOptions(const int argc, char** argv) const {
    return false;
}

} // namespace helpers::cli
