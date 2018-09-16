//hall,h
/*
Description:������ͷ�ļ�
Author:hanyuu
Date:18/08/24
Updated:18/09/12
*/

#ifndef HALL_H
#define HALL_H

#include <list>
#include <exception>
#include <boost/thread/thread.hpp>
#include "reader/CreatorReader.h"
#include "ui/UIWidget.h"
#include "hallPlayer.h"
#include "hallTools.h"
#include "chatroom_server.h"
#include"chatroom_client.h"
#include "GameScene.h"
#include "RoomModule.h"
#include "WelcomeScene.h"
#include "chatroom_client.h"
//#include"ui/CocosGUI.h"
//#include <string>

using namespace cocos2d;

/*
Function name:launchGame
Description:������Ϸ
Created:18/09/10
*/
void launchGame();

class Hall : public RoomModule
{
public:

    std::string * getNameList()
    {
        return m_playerNameList;
    }

	//�豸�ߴ�
	static Size m_size;
	//����ָ��
	static Scene * m_scene;
	//����״̬
	static int statusHall;
	//�������
	const static int playerNumber = 4;

	Hall();

	virtual ~Hall();

	/*
	Function name:getInstance
	Description:��ȡHallָ��
	Created:18/09/03
	Parameter��VOID
	Return Code:static Hall*
	Author:Hanyuu
	*/
	static Hall* getInstance();

	/*
	Function name:getGameRoomInfo
	Description:��ȡ��Ϸ������Ϣ
	Created:18/09/08
	Parameter:VOID
	Return Code:st_GameRoomInfo:������Ϣ
	Authro:Hanyuu
	*/
	static st_GameRoomInfo getGameRoomInfo();

	/*
	Function name:initializationHall
	Description:��������ʽע�������Ϣ
	Created:18/08/24
	Parameter��
		Scene:���뵼���ĳ���ָ��
	Return Code:VOID
	Authro:Hanyuu
	*/
	void initializationHall(Scene * scene);

	/*
	Function name:setConfirmButtonTrue
	Description:������Ϣ
	Created:18/09/06
	Parameter:bool:�Ƿ���ʾ
	Return:VOID
	Author:Hanyuu
	*/
	void setConfirmButtonTrue(bool);

	/*
	Function name : postMessage
	Description : ������Ϣ
	Created : 18/08/29
	Recent modified:18/09/09
	Parameter:
		int:�û�ID
		string:�������û���
	Return : VOID
	Author : Hanyuu
	*/
	void postMessage(int, std::string);

	/*
	Function name:getEditMessage
	Description:��ȡ��Ϣ�༭�����ı�
	Created:18/08/28
	Parameter:VOID
	Return:String:���ص��ı�
	Author:Hanyuu
	*/
	std::string getEditMessage() const;

	/*
	Function name:clearEditBox
	Description:�����Ϣ�༭���е��ı�
	Created:18/08/29
	Parameter:VOID
	Return:VOID
	Author:Hanyuu
	*/
	void clearEditBox();

	/*
	Function name:addMessageRecord
	Description:����������¼
	Created:18/08/29
	Parameter:
		string:Ҫ�ϴ�����Ϣ
		string:Ҫ�ϴ�����Ϣ��int:�û�ID
	Return:VOID
	Author:Hanyuu
	*/
	void addMessageRecord(std::string);

	/*
	Function name:addMessageRecord
	Description:����������¼
	Created:18/08/29
	Parameter:
		string:Ҫ�ϴ�����Ϣ
		string:Ҫ�ϴ�����Ϣ��int:�û�ID
	Return:VOID
	Author:Hanyuu
	*/
	void addMessageRecord(std::string, int);

	/*
	Function name:getMeaasgeRecord
	Description:��ȡ�����¼��Ϣ
	Created:18/09/02
	Parameter:VOID
	return:string �ַ�����ʽ�������¼��Ϣ
	Author:Hanyuu
	*/
	std::string getMessageRecord();

	/*
	Function name:getChoiceIsHost
	Description:�ж��Ƿ���Host
	Created:18/08/29
	Parameter:VOID
	Return:bool:�����Ƿ���Host
	Author:Hanyuu
	*/
	bool getChoiceIsHost() const;

	/*
	Function name:isHost
	Description:�ж��Ƿ���Host
	Created:18/08/29
	Parameter:VOID
	Return:bool:�����Ƿ���Host
	Author:Hanyuu
	*/
	bool isHost() const;

	/*
	Function name:getMyPlayerUserName
	Description:���ص�ǰ�û���
	Created:18/08/29
	Parameter:VOID
	Return:string:�û����ַ���
	Author:Hanyuu
	*/
	std::string getMyPlayerUserName() const;

	/*
	Function name:connectMessage
	Description:ͨѶ�߳�
	Created:20180829
	Parameter:VOID
	Return:VOID
	Author:Hanyuu 
	*/
	//void connectMessage();

	/*
	Function name:	messageListener
	Description:������Ϣ
	Created:18/08/30
	Parameter:shared_ptr:�����ָ��
	Return:string:VOID
	Author:Hanyuu
	*/
	void messageListener(boost::shared_ptr<ChatMessage>);

	/*
	Function name:getIPaddress
	Description:��EditBox��ȡIP��ַ
	Created:18/09/01
	Parameter:VOID
	Return:string:IP��ַ
	Author:Hanyuu
	*/
	std::string getIPAdress();

	/*
	Function name:setMyPlayerID
	Description:���õ�ǰ�û�ID
	Created:18/09/07
	Update date:18/09/09
	Parameter:int:Ŀ��ID
	Return:VOID
	Author:Hanyuu
	*/
	void setMyPlayerID(int);

	/*
	Function name:getMyPlayerID
	Description:��ȡ��ǰ�û�ID
	Created:18/09/07
	Update date:18/09/09
	Parameter:VOID
	Return:int::�û�ID
	Author:Hanyuu
	*/
	int getMyPlayerID();

	/*
	Function name:sendMessage
	Description:����������Ϣ
	Created:18/08/26
	Parameter:String:�����͵���Ϣ����
	Return Code:bool:���ͳɹ��ж�
	Author:Hanyuu
	*/
	//bool sendChatMessage(std::string) const;

	/*
	Function name:reeateRoom
	Description:
	Created:18/09/06
	Parameter:room_list_type
	Return:VOID
	Author:Hanyuu
	*/

	void createRoom();
	/*
	Function name:setHallStatus
	Description:���ô�������״̬ [0:δѡ��][1:Host][2:Client]
	Created:18/09/07
	Parameter:int:Ŀ��״̬
	Return:VOID
	Author:Hanyuu
	*/
	void setHallStatus(int);

	/*
	Function name:getHallStatus
	Description:��ȡ��������״̬ [0:δѡ��][1:Host][2:ClientHall][3:Client]
	Created:18/09/07
	Parameter:VOID
	Return:int:Ŀ��״̬
	Author:Hanyuu
	*/
	int getHallStatus() const;

	/*
	Function name:hostCallBack
	Description:Host�ص�
	Created:18/09/07
	Updated:18/09/09
	Parameter:bool:���سɹ�״̬
	Return:VOID
	Author:Hanyuu
	*/
	void hostCallBack(bool);

	/*
	Function name:clientCallBack
	Description:Client�ص�
	Created:18/09/07
	Updated:18/09/09
	Parameter:bool:���ط����б�
	Return:VOID
	Author:Hanyuu
	*/
	void clientCallBack(room_list_type *);

	/*
	Function name:hostCallBack
	Description:Host�ص�
	Created:18/09/07
	Updated:18/09/09
	Parameter:bool:���سɹ�״̬
	Return:VOID
	Author:Hanyuu
	 */
	void setChoiceIsHost(bool);

	/*
	Function name messageFiltrator
	Description:��Ϣ������
	Created:18/09/11
	Parameter:shared_ptr<CharMessage>������Ϣ
	Return:bool:�����ж�
	Author:Hanyuu
	*/
	bool messageFiltrator(boost::shared_ptr<ChatMessage>);

	/*
	Function name messageFiltrator
	Description:��Ϣ������
	Created:18/09/11
	Parameter:shared_ptr<CharMessage>������Ϣ
	Return:bool:�����ж�
	Author:Hanyuu
	*/
	std::string getCachedName();

	/*
	Function name:updateUINameList
	Description:����UI�����б�
	Created:18/08/29
	Updated:18/09/12
	Parameter:VOID
	Return:bool:�����Ƿ���Host
	Author:Hanyuu
	*/
	void updateUINameList();

	/*
	Function name:getGameRandSeed
	Description:��ȡͬ����Ϸ��������
	Created:18/09/07
	Parameter:VOID
	Return:VOID
	Author:Hanyuu
	*/
	int getGameRandSeed();
	/*
	Function name:loadingFrame
	Description:��Ϸ����ǰ�ȴ�����
	Created:18/09/11
	Parameter:VOID
	Return:VOID
	Author:Hanyuu
	*/
	void loadingFrame();
protected:
private:
	//Ĭ���û����б�
	const st_HallPlayer m_defeatHallPlayer[playerNumber] = { {0,"[None]:0"},{1,"[None]:1"},{2,"[None]:2"},{3,"[None]:3"} };
	//Host״̬��
	const bool m_hostStatus[playerNumber] = { true,false,false,false };
	//Hall instance
	static Hall * instance;
	cocos2d::Sprite * m_choiceBackground;
	cocos2d::Sprite * m_girl;
	cocos2d::Sprite * m_bubble;
	cocos2d::Sprite * m_load;
	cocos2d::ui::Button * m_play;
	cocos2d::ui::Button * m_sendButton;
	cocos2d::ui::Button * m_changeisHost;
	cocos2d::ui::Button * m_confirmStatus;
	cocos2d::ui::Button * m_closeSession;
    cocos2d::ui::Button * m_soloModal;
	cocos2d::ui::Button * m_back;
	cocos2d::ui::TextField * m_editBox;
	cocos2d::Label * m_record;
	cocos2d::Label * m_bubbleLabel;
	cocos2d::Label * m_playerNameField[playerNumber];
	//�����¼��Ϣ����
	std::list<st_MessageRecord> * m_messageRecord;
	//������Ϣ��
	room_list_type * m_hallRoom;
	//�û�����
	std::string	m_playerNameList[playerNumber];
	//�Ӵ�����õ�����
	std::string m_cachedName;
	//��ǰ�û�ID
	int m_myPlayerID = 0;
	//��������״̬:[0:δѡ��][1:Host][2:ClientHall][3:Client]
	int m_status = 0;
	//����ǰѡ���Ƿ�ΪHost
	bool m_choiceIsHost{ false };
	//���������
	int m_randSeed;

};
#endif