#pragma once

#ifndef BULLET_H
#define BULLET_H

#include "cocos2d.h"
#include "BulletSprite.h"
#include <vector>

USING_NS_CC;
using namespace std;

//��������
enum type{BLACK,GREEN,BLUE,YELLOW,X_RAY};
//const int INITBULLET = 10;
//�����������
const float DISTANCE = 40.0f;


class Bullet:public cocos2d::Layer
{
private:
   // static Bullet* instance;
	float speed;//�ٶ�
	type thisType;//��������
	string picName;//ͼƬ���� 
	Texture2D* nowTexture, *bullet1, *bullet2, *bullet3, *bullet4, *bullet5, *bulletFire;
	Vec2 direction;//�ͷ������ķ���
	float distance;//���
	float power;//��������

	vector<int> monsterID;
	vector<int> minDisPlayerID;

	bool canAttack[5];

	double monsterDt, playerDt;//�������ҿ��Է����ӵ��ļ��

public:
	Vector<BulletSprite*> bulletVector;
	Vector<BulletSprite*> monsterBullet;
//    static Bullet* getInstance();

	~Bullet();

	CREATE_FUNC(Bullet);
	bool init();

	void setMonsterDt(const float);
	void setPlayerDt(const float);

	void setSpeed(float);
	float getSpeed()const;

	void setType(type);
	void setType(const string&);
	type getType() const;

	void setPicName(std::string);
	std::string getPicName();

	void setPower(float);
	float getPower()const;

	void setDistance(float);
	float getDistance() const;

	//����ӵ�
	void removeBullet(BulletSprite * bullet);
	//�ж���ײ
	void ifCollide(float dt);
	//���﹥��
	void playerAttack(int);
	void playerCanAttack(float);
	
	//���﹥��
	void monsterAttack(float);
	void startMonsterAttack(int, int);
	void stopMonsterAttack(int, int);
	
	//���㹥����������
	float getDegree(Vec2 A, Vec2 B);
	float getDis(Vec2 A, Vec2 B);
};




#endif // !BULLET_H

