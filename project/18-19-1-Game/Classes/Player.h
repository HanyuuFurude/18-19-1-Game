#pragma once
/*
    Description : ��Ϸ�����趨(game player setting)
    Author : �Ž���(Zhang Jiandong)
    Date : 2018/8/20
*/

#include "cocos2d.h"
#include "BloodBar.h"
const float eps = 1e-6;
using namespace cocos2d;
using namespace std;

class Player {
public:
    static void CreatePlayer(int);
    //��������
    void LevelUpAnim();
    Player();
    //���ҡ�˽Ƕ��ƣ�������Ϊ������
    float getDegree()const;
    void setDegree(const float&);
    //�ٶ�
    float getSpeed() const;
    void setSpeed(const float&);
    //Ѫ��
    float getHP() const;
    void setHP(const float&);
    //�˺�
    virtual float getDamage() const;
    void setDamage(const float&);
    //����
    string getName() const;
    void setName(const string&);
    //��һ������
    string getNextDirection() const;
    void setNextDirection(const string&);
    //��ǰ����
    string getNowDirection() const;
    void setNowDirection(const string&);
    //�����Ϸ��ɫ
    void setPlayer(Sprite*);
    Sprite* getPlayer();
    virtual void Move(int,Sprite*,cocos2d::TMXTiledMap*,TMXLayer*,TMXLayer*);
    virtual void UpdateAnim();
    //���ö�������
    bool getAnimDone()const;
    void setAnimDone(const bool&);
    Point tileCoordToPosition(cocos2d::TMXTiledMap* tileMap, Vec2 pos);
    //�ȼ�
    float getLevel() const;
    void setLevel(const float &);
    //����
    float getScore() const;
    void setScore(const float&);
    //void setDietoBorn(float dt);
    //�����������
    void PlayerDie();
    //�ж��Ƿ�����
    bool isDie() const;
    //�����ӵ�����
    void setBulletType(const string&);
    string getBulletType() const;
    //�ж��Ƿ񹥻�
    bool isAttack()const;
    void setIsAttack(const bool &x);
    //��ӻ�����Ϣ
    virtual void addBasicInfo();
    //�Ż�����: �������vector
    vector<int> closeMonster;
    //Ѫ��
    BloodBar* m_bloodProgress;
    //������Ϣ��ʾlabel
    LabelTTF* m_proShow;
    vector<pair<int, int>> iHashID;
    virtual float getMaxHP()const;
    Vec2 getDestination() const;
    void setDestination(const Vec2 &);
    void setIsScheduing(const bool& x);
    bool getIsScheduing()const;
protected:
    float m_fSpeed,m_fHP,m_fDamage,m_fDegree;//�ٶȡ�Ѫ�����˺�
    bool m_bIsAnimDone,m_bIsAttack,m_bIsScheduing;//�����ж�,�����ж�,��ʱ��
    string m_strName, m_strNowDirection,m_strNextDirection;//����,���ڷ�����һ������
    string bulletType;
    Vec2 m_pDestination;//�յ�
    pair<int,int> directionScale[8] = { {-10,0} ,{-7,7},
                        {0,10},{7,7},{10,0},
                        {7,-7},{0,-10},
                        {-7,-7} };
private:
    Sprite* m_spPtrPlayer;//���_����
    float m_fLevel, m_fScore;//�ȼ�,����
};