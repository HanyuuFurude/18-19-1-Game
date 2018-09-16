/*
    Description : Ѫ����(bloodprogress design)
    Author : �Ž���(Zhang Jiandong)
    Date : 2018.9.5
*/

#include "BloodBar.h"
const float eps = 1e-6;
void BloodBar::setBloodBar(float per) 
{ 
    log("the boss % f", per);
    if (per <= 0 + eps) return; //�ж�Ѫ���Ƿ�С��0
    if (per + eps > 100) per = 100;
    m_ptimePtrFill->setPercentage(per); 
}
//���
void BloodBar::setFill(ProgressTimer* fill) 
{ 
    m_ptimePtrFill = fill; 
}
//Ԥ���أ�Ѫ��Ϊ100%
bool BloodBar::init(const char* background, const char * fillname) 
{
    this->initWithSpriteFrameName(background);
    ProgressTimer* fill = ProgressTimer::create(Sprite::createWithSpriteFrameName(fillname));
    this->setFill(fill);
    this->addChild(fill);

    fill->setType(ProgressTimer::Type::BAR);//����ProgressBar��
    fill->setMidpoint(Point(0, 0.5));
    fill->setBarChangeRate(Point(1.0, 0));//����Ѫ�����ٱ���
    fill->setPosition(this->getContentSize() / 2);
    fill->setPercentage(100);
    return true;
}

BloodBar* BloodBar::create(const char* background, const char* fillname) 
{
    BloodBar* bloodBar = new BloodBar();
    if (bloodBar && bloodBar->init(background, fillname)) 
    {
        bloodBar->autorelease();
        return bloodBar;
    }
    delete bloodBar;
    bloodBar = NULL;
    return NULL;
}