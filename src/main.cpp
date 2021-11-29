
// File for sandboxing and trying out code

#include <stdio.h>
#include <stdlib.h>

#include "../tests/include/catch.hpp"
#include "../tests/include/duration.h"

int main(int argc, char **argv)
{

    Duration clock;

    if (clock.getDuration() == 0)
        printf("\n 1st test passed");

    Duration clock_arg_175(175);

    if (clock_arg_175.getDuration() == 175)

        printf("\n\n 2nd test passed");

    Duration clock_arg_9999999(9999999);

    if (clock_arg_9999999.getDuration() == 9999999)

        printf("\n\n 3rd test passed");

   Duration clock_tick(8);
   assert(clock_tick.getDuration() == 0);

   clock_tick.tick()




    return 0;
}