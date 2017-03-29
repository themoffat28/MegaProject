//
//  Timer.hpp
//  Second C++ Project
//
//  Created by Moffat, Braeden on 1/31/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t excecutionTime;
public:
    //Constructor
    Timer();
    //Methods
    void startTimer();
    void stopTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExcecutionTimerInMicroseconds();
};

#endif /* Timer_hpp */
