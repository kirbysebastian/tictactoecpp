#ifndef __COMMAND_LINE_PARSER__
#define __COMMAND_LINE_PARSER__

#include <optional>
#include <string>
#include <unordered_map>

#include "types/CommandLineTypes.hpp"

namespace helpers::cli {

using AppName = std::string;
using CommandLineOptions = std::unordered_map<types::CommandLineOption, std::string>;
using CommandLineOptionResult = std::optional<std::string>;

class CommandLineParser {
public:
    CommandLineParser();

    bool parse(const int argc, char** argv);
    CommandLineOptionResult getOptions(const types::CommandLineOption option);


private:
    bool initOptions(const int, char**) const;

    AppName m_appname{""};
    CommandLineOptions m_options;
};
} // namespace helper::cli

#endif // __COMMAND_LINE_PARSER__

