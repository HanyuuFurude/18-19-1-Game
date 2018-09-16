//RoomModule.h
/*
Description:����ģ��ͷ�ļ�
Author:Hanyuu
Date:18/09/03
*/

#ifndef ROOM_MODULE_H
#define ROOM_MODULE_H

#include <string>
#include "cocos2d.h"
#include "ui/CocosGUI.h"
#include "http_service.h"
#include "hallTools.h"
#include "hallPlayer.h"
//#include "hall.h"
//#include "HallScene.h"

class RoomModule
{
	//friend Hall;
public:
	//��ǰ�������������
	int m_roomPlayerNumber;
	short m_selected;
	std::vector<st_RoomInfo> m_roomList;
	RoomModule();
	~RoomModule();
	/*
	Function name:updateRoomList
	Description:����List��Ϣ
	Created:18/09/06
	Parameter:VOID:
	Return:VOID
	Author:Hanyuu
	*/
	void updateRoomList();
	/*
	Function name:addInfo
	Description:���List��Ϣ
	Created:18/09/06
	Parameter:st_RoomInfo*:������Ϣ
	Return:VOID
	Author:Hanyuu
	*/
	void addInfo(st_RoomInfo *);
	/*
	Function name:recall
	Description:�ص�
	Created:18/09/06
	Parameter:bool:�ж��Ƿ�ɹ�
	Return:VOID
	Author:Hanyuu
	*/
	void recall(bool);
	/*
	Function name:roomModuleInitialize
	Description:����ģ���ʼ����Ϣ
	Created:18/09/06
	Parameter:VOID:
	Return:VOID
	Author:Hanyuu
	*/
	void roomModuleInitialize();
	/*
	Function name:setRoomModuleVisible
	Description:���÷����Ƿ�ɼ�
	Created:18/09/06
	Parameter:bool:����ֵ
	Return:VOID
	Author:Hanyuu
	*/
	void setRoomModuleVisible(bool);
	/*
	Function name:getHostName
	Description:��ȡHost����
	Created:18/09/06
	Parameter:VOID
	Return:string:Host����
	Author:Hanyuu
	*/
	std::string getHostName();
	/*
	Function name:getHostIP
	Description:��ȡIP��ַ
	Created:18/09/06
	Parameter:VOID
	Return:string��IP��ַ
	Author:Hanyuu
	*/
	std::string getHostIP();
    int getPlayerNumber();
	/*
	Function name:getRoomCallback
	Description:��ȡ����ص�
	Created:18/09/06
	Parameter:room_list_type
	Return:VOID
	Author:Hanyuu
	*/
	void getRoomCallback(room_list_type * rl);
	void turnPages(bool);
	std::string getCachedName();
	void updateUINameList();
	int getGameRandSeed();
	int getRoomPlayerNumber()
	{
		return m_roomPlayerNumber;
	}
	void setRoomPlayerNumber(int num)
	{
		m_roomPlayerNumber = num;
	}
	short m_currentPageNumber = 0;

private:
	//static RoomModule* instance;
	std::string m_selectedIPv4;
	cocos2d::Size m_roomBoxSize;
	cocos2d::ui::Button * m_roomButton[4];
	cocos2d::ui::Button * m_roomListPrev;
	cocos2d::ui::Button * m_roomListNext;
	cocos2d::ui::Button * m_exitButton;
	cocos2d::ui::Button * m_update;
	cocos2d::ui::Button * m_freshList;
	cocos2d::Sprite * m_roomBox;

	//cocos2d::ui::Button * m_roomBox;
};

void joinCallback(bool success, std::string IPv4);

#endif // !ROOM_MODULE