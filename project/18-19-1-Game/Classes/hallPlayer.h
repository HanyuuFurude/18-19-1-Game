//hallPlayer.h
/*
Description:������ṹ��
Author:hanyuu
Date:18/08/24
*/
#ifndef HALL_PLAYER_H
#define HALL_PLAYER_H

#include <string>

//�����Ϣ
struct st_HallPlayer
{
	//���ID
	int tag_ID;
	//�������
	std::string tag_playerName;
};

//��Ϣ
struct st_MessageRecord
{
	//������ID
	int tag_ID;
	//��Ϣ����
	std::string tag_message;
};

//������Ϣ
struct st_RoomInfo
{
	std::string tag_ipv4;
	int tag_playerNum;
	std::vector<st_HallPlayer> tag_playerName;
};

//������Ϣ
struct st_GameRoomInfo
{
	int currentPlayerNumber;
	int playerNumber;
	std::string ipv4;
};

//����ս���ɹ��ṹ��
struct st_BattleFinishInfo
{
	std::string tag_name;
	float tag_GPA;
};
#endif // !HALL_PLAYER_H