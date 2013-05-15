//
//  StartLayer.h
//  TimerRush
//
//  Created by JuhnXu on 13-5-16.
//
//

#ifndef __TimerRush__StartLayer__
#define __TimerRush__StartLayer__

#include <iostream>
#include "cocos2d.h"
using namespace cocos2d;

class StartLayer : public cocos2d::CCLayer
{
    
public:
    static CCScene *scene();
    virtual bool init();
    CREATE_FUNC(StartLayer);



};

#endif /* defined(__TimerRush__StartLayer__) */
