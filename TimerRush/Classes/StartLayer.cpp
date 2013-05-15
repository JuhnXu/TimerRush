//
//  StartLayer.cpp
//  TimerRush
//
//  Created by JuhnXu on 13-5-16.
//
//

#include "StartLayer.h"
#include "Res.h"

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
    
//    sp->setTag(TAG__SPRITE_START);
    
    CCMenuItemSprite *isp = CCMenuItemSprite::create(sp, sp, this, menu_selector(StartLayer::start));
    
    CCMenu *menu = CCMenu::create(isp ,NULL);
    
    menu->setPosition(ccp(winSize.width /2 ,winSize.height /2));
    
    this->addChild(menu , 0 ,TAG__SPRITE_START);
    

    
    return true;
}


void StartLayer::start()
{
    CCLog("open the game...");
    CCScaleTo *scale = CCScaleTo::create(1, 2);
    CCFadeOut *fade = CCFadeOut::create(1);

    this->getChildByTag(TAG__SPRITE_START)->runAction(CCSequence::create(scale , fade ,NULL));
    
}