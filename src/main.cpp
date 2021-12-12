
// File for sandboxing and trying out code

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../tests/include/catch.hpp"
#include "duration.h"

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

    Duration clock_tick(0);
    assert(clock_tick.getDuration() == 0);

    printf("\n\ninitial time = %d,", clock_tick.getDuration());

    clock_tick.tick(); // increment by 1
    clock_tick.tick(); // increment by 1

    if (clock_tick.getDuration() == 2)
        printf(" final time = %d = 4th test passed", clock_tick.getDuration());

    clock_tick.tick(5);

    if (clock_tick.getDuration() == 7)
        printf("\n\nfinal time = %d = 5th test passed", clock_tick.getDuration());

    clock_tick.setAlarm(9); // alarm is being set
    assert(!clock_tick.tick());
    assert(clock_tick.tick(2)); 

    printf("\n\n6th test passed\n");

    clock_tick.setAlarm(17);
    assert(!clock_tick.tick());
    assert(clock_tick.tick(8)); 

    printf("\nAssertion successful");

    clock_tick.setAlarm(22);
    assert(!clock_tick.tick());

    printf("\nAssertion successful");

    clock_tick.setAlarm(21);
    assert(clock_tick.tick());

    printf("\nAssertion successful");

    clock_tick.setAlarm(27);
    assert(!clock_tick.tick());

    printf("\n\n7th test passed\n");

    clock_tick.setAlarm(17);
    assert(!clock_tick.tick());
    assert(!clock_tick.tick(3)); 
    assert(clock_tick.tick()); 

    printf("\nAssertion successful");

    assert(!clock_tick.tick()); // function tick() has to return false, since the alarm has been reset

    printf("\nAssertion successful");

    printf("\n\n8th test passed\n");

    printf("====================================\n");
    printf("All tests passed");












    


  

    



    return 0;
}