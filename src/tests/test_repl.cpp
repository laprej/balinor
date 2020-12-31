#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
                           // only do this in one cpp file
#include <catch2/catch.hpp>

#include "../repl.h"

TEST_CASE( "Factorials are computed", "[factorial]" )
{
    balinor::Repl::input_loop();
}
