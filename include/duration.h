
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#ifndef _duration_H_
#define _duration_H_

class Duration
{
private:
    int time;
    int alarm;
    bool alarmHasBeenSet;

public:
    Duration();
    int getDuration();
    Duration(int t);
    ~Duration();


    bool tick();
    bool tick(int dt);

    void setAlarm(int t);

    bool checkAndUpdateAlarm(); 
};

#endif