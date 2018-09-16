#pragma once
/*
    Description : Ѫ����(blood bar)
    Author : �Ž���(zhang jiandong)
    Date : 2018.9.5
*/
#include "cocos2d.h"
USING_NS_CC;

class BloodBar : public Sprite {
public:
    //����
    bool init(const char* background, const char* fillname);
    static BloodBar* create(const char* background, const char* fill);
    //���
    void setFill(ProgressTimer* fill);
    //����Ѫ��
    void setBloodBar(float per);

private:
    ProgressTimer* m_ptimePtrFill;
};
