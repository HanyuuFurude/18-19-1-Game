/*
    Description : ����ʵ��
    Author : �Ž���
    Date : 2018.9.5
*/

#ifndef __BAG_WINDOW_H__
#define __BAG_WINDOW_H__

#include "FairyGUI.h"
#include "HallTools.h"
USING_NS_FGUI;

class BagWindow : public Window
{
public:
    CREATE_FUNC(BagWindow);
    static GList* m_listPtrList;
protected:
    //���ء������麯��
    virtual void onInit() override;
    virtual void doShowAnimation() override;//�򿪱�����������
    virtual void doHideAnimation() override;//�رձ�����������

private:
    void onClickItem(EventContext* context);
    void renderListItem(int index, GObject* obj);


};

#endif