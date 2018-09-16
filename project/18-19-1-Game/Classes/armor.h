#pragma once
#include "item.h"
#include <vector>
class armor :
	public item
{
public:
	armor();
	armor(int, const string &, int, const string &, const string &, int, int,int,int,int,int,int,int);
	armor(const armor &);
	virtual ~armor();

	int DmgCalculate() {//�˺����㹫ʽ
		//(��������������ֵ+���������߹̶�������-�ܻ������߹̶���������*��1+��������������ϵ����*(1+�ܻ������߼���ϵ����*��1+buff����ϵ����+buff����ֵ-buff����ֵ
	}

	static vector<armor> initArmorList();

	void useItem();


private:
	int armor_DefRate;//����ϵ������0.3Ϊ����30%�ܵ��˺���-0.2Ϊ����20%�ܵ��˺�
	int armor_DefCount;//�̶�������,10Ϊ����10���ܵ��˺�
	int armor_HpUp;//����Ѫ������
	int armor_SpdUp;//���٣��̶�ֵ
	int armor_AtkRate;//����ϵ��
	int armor_AtkCount;//�̶�����
};

