
#include "../tests/include/duration.h"

int Duration::getDuration()
{

    /* complete this method */

    return (time);
}

Duration::Duration()
{
    /* complete this method */

    time = 0;
}

Duration::Duration(int t)
{
    /* complete this method */

    assert(t >= 0); // pre-condition

    time = t;
}

void Duration::tick()
{

/* complete this method */

time++;

}

// void Duration::tick(int dt)
// {

/* complete this method */

// time += 1;

// }

// void Duration::setAlarm(int t)
// {
/* complete this method */
// }
