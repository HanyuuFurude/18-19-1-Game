/*
    Description : ҡ�������(joystick design)
    Author: �Ž���(Zhang Jiandong)
    Date : 2018/8/21
*/

#ifndef __JOYSTICK_MODULE_H__
#define __JOYSTICK_MODULE_H__

#include "cocos2d.h"
#include "FairyGUI.h"

USING_NS_FGUI;

class YGMoudle : public UIEventDispatcher
{
public:
    static const int MOVE = 100;
    static const int END = 101;

    static YGMoudle* create(GComponent* mainView);

private:
    bool init(GComponent* mainView);
    //������ʼ
    void onTouchBegin(EventContext* context);
    //�ƶ�ҡ��
    void onTouchMove(EventContext* context);
    //�ƶ�����
    void onTouchEnd(EventContext* context);

    float m_fInitX;//��ʼx
    float m_fInitY;//��ʼy
    float m_fstartStageX;//��ʼԲ��x
    float m_fstartStageY;//��ʼԲ��y
    float m_flastStageX;//����X
    float m_flastStageY;//����y
    int m_iRadius;//�뾶

    GButton* m_btnPtrButton;//��ť
    GObject* m_objPtrTouchArea;//������
    GObject* m_objPtrThumb;//��ָ�ƶ�
    GObject* m_objPtrCenter;//��ʾ����
    GTweener* m_PtrTweener;//UI�м��
    int touchId;
};

#endif
