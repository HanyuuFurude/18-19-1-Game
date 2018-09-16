/****************************************************************************
 ��������ʼ��Ϸҳ��
 ���ߣ������
 ʱ�䣺2018/8/27
 ****************************************************************************/

#ifndef __WELCOME_SCENE_H__
#define __WELCOME_SCENE_H__

#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace std;

class WelcomeScene : public cocos2d::Scene
{
public:

	std::string playerName;
	std::string getPlayerName();

	cocos2d::ui::TextField* text;

	Sprite* aboutSprite;

	cocos2d::ui::Button* close;

	static WelcomeScene* getInstance();

	static cocos2d::Scene* createScene();

	virtual bool init();

	void loadScene();

	void menuCloseCallback(Ref * pSender);
	// add a princess walk on screen

	// implement the "static create()" method manually
	CREATE_FUNC(WelcomeScene);

private:
	static WelcomeScene* instance;
    static  CocosDenshion::SimpleAudioEngine* audio;

};

#endif // __WELCOME_SCENE_H__
