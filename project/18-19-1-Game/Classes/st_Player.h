#pragma once
#include<string>
#include <boost/serialization/access.hpp>
/*
Description : ��Ϸ�����趨
Author : �Ž���
Date : 2018/8/20
*/

using namespace std;

struct st_Player {
    float Level;
    float score;//����ID,�ȼ�,����
	float speed, HP, damage;//�ٶȡ�Ѫ�����˺�
	bool animDone,is_attack;//�����ж�
	string name, nowDirection, nextDirection;
	string bulletType;
	float x, y;
	float degree;

	template<class Archive>
	void serialize(Archive &ar, const unsigned int version)
	{
		ar & x;
		ar & y;
		ar & Level;
		ar & score;
		ar & speed;
		ar & HP;
		ar & damage;
		ar & animDone;
		ar & name;
		ar & nowDirection;
		ar & nextDirection;
		ar & is_attack;
		ar & degree;
		ar & bulletType;
	}

	friend class boost::serialization::access;
	st_Player() :Level(0), score(0), speed(0), HP(0), 
		damage(0), animDone(0),x(0),y(0),is_attack(0),degree(0) {}
};