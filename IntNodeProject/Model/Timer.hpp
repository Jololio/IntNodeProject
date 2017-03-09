//
//  Timer.hpp
//  FirstCPlusPlus
//
//  Created by Alabudi, Joseph on 1/31/17.
//  Copyright © 2017 Alabudi, Joseph. All rights reserved.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <time.h>

class Timer
{
private:
    clock_t executionTime;
    
public:
    Timer();
    void startTimer();
    void finishTimer();
    void resetTimer();
    void displayTimerInformation();
    long getExecutionTimeInMicroseconds();
};


#endif /* Timer_hpp */
