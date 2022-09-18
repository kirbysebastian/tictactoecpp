#ifndef __COMMAND_LINE_TYPES__
#define __COMMAND_LINE_TYPES__

#include <cstdint>

namespace helpers::cli::types {

enum class CommandLineOption : std::uint32_t {
    mode = 0,
};

} // namespace helpers::cli::types
#endif // __COMMAND_LINE_TYPES__

