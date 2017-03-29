//
//  Timer.cpp
//  Second C++ Project
//
//  Created by Moffat, Braeden on 1/31/17.
//  Copyright © 2017 Moffat, Braeden. All rights reserved.
//

#include "Timer.hpp"
#include <iostream>

using namespace std;

Timer :: Timer()
{
    excecutionTime = 0;
}

void Timer :: resetTimer()
{
    excecutionTime = 0;
}

void Timer :: startTimer()
{
    excecutionTime = clock();
}

void Timer :: stopTimer()
{
    excecutionTime = clock() - excecutionTime;
}

void Timer :: displayTimerInformation()
{
    cout << "The excecution time is: " << excecutionTime << endl;
    cout << "In human time, it is " << double (excecutionTime)/CLOCKS_PER_SEC << " seconds." << endl;
    
}

long Timer :: getExcecutionTimerInMicroseconds()
{
    return excecutionTime;
}
