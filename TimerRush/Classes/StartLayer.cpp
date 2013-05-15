//
//  StartLayer.cpp
//  TimerRush
//
//  Created by JuhnXu on 13-5-16.
//
//

#include "StartLayer.h"


CCScene* StartLayer::scene()
{

    CCScene *scene = CCScene::create();
    

    StartLayer *layer = StartLayer::create();
    

    scene->addChild(layer);
    

    return scene;
}


bool StartLayer::init()
{
    
    if (!CCLayer::init()) {
        
        return false;
    }
    

    CCSize winSize = CCDirector::sharedDirector()->getWinSize();
    
    CCSprite *sp = CCSprite::create("Icon.png");
    sp->setPosition(ccp(winSize.width /2 ,winSize.height /2));
    this->addChild(sp); 
    
    
    return true;
}