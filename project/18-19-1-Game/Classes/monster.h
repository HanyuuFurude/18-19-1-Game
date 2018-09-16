#pragma once
/*
    Description:����ϵͳ(monster system)
    Author : �Ž���(Zhang Jiandong)
    Date : 2018/8/24
*/

#include "cocos2d.h"
#include "Player.h"
using namespace cocos2d;
using namespace std;

class Monster : public Player 
{//�̳���Player
public:
    //���ﾫ��
    Monster();
    Monster(int);
    static void createMonster();
    Sprite* getMonster();
    void setMonster(Sprite*);
    void setKind(const int&);//��������
    int getKind()const;
    virtual void UpdateAnim() override;
    void addBasicInfo() override;
    float getDamage()const override;
    float getMaxHP()const override;
protected:
    Sprite* m_spPtrMonster;
private:
    int iKind;
};

class Boss : public Monster
{
public:
    Boss();
    void UpdateAnim() override;
};
