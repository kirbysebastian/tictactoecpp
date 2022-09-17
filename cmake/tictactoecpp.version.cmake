###
#
# TicTacToe CPP Version Configuration
#

set(__tttcpp_major__ 1)
set(__tttcpp_minor__ 0)
set(__tttcpp_patch__ 0)

#add_compile_definitions(TICTACTOE_CPP_VERSION_MAJOR=${__tttcpp_major__})
#add_compile_definitions(TICTACTOE_CPP_VERSION_MINOR=${__tttcpp_minor__})
#add_compile_definitions(TICTACTOE_CPP_VERSION_PATCH=${__tttcpp_patch__})

#set(TICTACTOE_CPP_VERSION "${TICTACTOE_CPP_VERSION_MAJOR}.${TICTACTOE_CPP_VERSION_MINOR}.${TICTACTOE_CPP_VERSION_PATCH}")


set(TICTACTOE_CPP_VERSION "${__tttcpp_major__}.${__tttcpp_minor__}.${__tttcpp_patch__}")
message(STATUS "TICTACTOE_CPP_VERSION: ${TICTACTOE_CPP_VERSION}")

