#pragma once

#ifndef BULLET_SPRITE_H
#define BULLET_SPRITE_H

#include "cocos2d.h"

USING_NS_CC;
using namespace std;

class BulletSprite :public Sprite
{
public:
	
	void setPlayerID(int);
	int getPlayerID() const;

	void setMonsterID(int);
	int getMonsterID() const;

	void setDamage(float);
	float getDamage() const;

	static BulletSprite * create(const string&);
	static BulletSprite* createWithTexture(Texture2D *texture);
	bool operator==(BulletSprite&);
private:
	//��¼�����ӵ�����ң�����ӵ��ǹ��﷢���ģ���Ϊ0
	int playerID;
	//��¼�����ӵ��Ĺ������ӵ�����ҷ����ģ���Ϊ0
	int monsterID;
	//��¼��ǰ�������˺��ӳ�
	float damage;
};

#endif // !BULLET_SPRITE_H

