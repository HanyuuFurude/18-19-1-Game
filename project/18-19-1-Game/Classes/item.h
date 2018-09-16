#pragma once
#include "cocos2d.h"
#include "Player.h"
#include "BagWindow.h"
#include "Hall.h"

using namespace std;
class item
{
public:
	item();
	item(int, const string &,int, const string &, const string &,int,int);
	item(item&);
	virtual ~item();

	int getitem_Id()const;
	int getitem_Type()const;
	string getitem_Name()const;
	string getitem_Icon()const;
	string getitem_Introduction()const;
	int getitem_Level()const;
	int getitem_PlayerId()const;
	void setitem_PlayerId(int);
	bool operator>(item &);
	bool operator =(item &);
	bool operator !=(item &);
	void init();
	void setitem(vector<item *> &,int);
	static vector<item *> inititemList();
	string pickup(int);

	void setitemIcon(Sprite*);
	Sprite* getitemIcon();
	void creatItem(int);
	Node* getPickUpMenu(int,int);

	virtual void useItem();

	bool isshow = false;

protected:
	int item_Id;
	string item_Name;//��Ʒ����
	int item_Type;//��Ʒ����
	string item_Icon;//��Ʒͼ��
	string item_Introduction;//��Ʒ����
	int item_Level;//��Ʒ�ȼ���ϡ�жȣ�
	int item_PlayerId;//��Ʒ������id��0Ϊδ��ʰȡ״̬
	Sprite *itemIcon;
};

