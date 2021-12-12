

#include "../include/duration.h"

int Duration::getDuration()
{

    /* complete this method */

    return (time);
}

Duration::Duration()
{
    /* complete this method */

    time = 0;
    alarm = 12;
    alarmHasBeenSet = false;
}

Duration::Duration(int t)
{
    /* complete this method */

    assert(t >= 0); // pre-condition

    time = t;
    alarm = 12;
    alarmHasBeenSet = false;
}

Duration::~Duration(){}

bool Duration::checkAndUpdateAlarm() {
    if(time >= alarm && alarmHasBeenSet) {
        alarmHasBeenSet = false;
        alarm = 0;
        return true;
    }
    else {
        return false;
    }
}

bool Duration::tick()
{

/* complete this method */

time += 1;

return checkAndUpdateAlarm();

}

bool Duration::tick(int dt)
{

/* complete this method */

assert(dt >= 0);

time += dt;

return checkAndUpdateAlarm();

}

void Duration::setAlarm(int t)
{
/* complete this method */
if (t <= time)
    return;
else 
    alarmHasBeenSet = true;
    alarm = t;
}


