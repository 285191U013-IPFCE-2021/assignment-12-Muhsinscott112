#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "duration.h"

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

// Add your test cases. Dont forget to include header file.

TEST_CASE("duration")
{
    Duration clock1;
    REQUIRE(clock1.getDuration() == 0);

    Duration clock_arg_175(175);
    REQUIRE(clock_arg_175.getDuration() == 175);

    Duration clock_arg_9999999(9999999);
    REQUIRE(clock_arg_9999999.getDuration() == 9999999);

    Duration clock_tick(0);
    assert(clock_tick.getDuration() == 0);
    clock_tick.tick(); // increment by 1
    clock_tick.tick(); // increment by 1
    REQUIRE(clock_tick.getDuration() == 2);

    clock_tick.tick(5); // adds 5
    REQUIRE(clock_tick.getDuration() == 7);


}