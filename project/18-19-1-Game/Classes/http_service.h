#pragma once

#include "network/HttpClient.h"
#include "cocos2d.h"
#include <sstream>
#include "json/rapidjson.h"
#include "json/document.h"
#include "boost/function.hpp"
#include "st_Room.h"
#include "boost/smart_ptr.hpp"
#include <vector>
#include "boost/bind.hpp"

using namespace cocos2d::network;

typedef std::vector<boost::shared_ptr<st_room>> room_list_type;
typedef boost::shared_ptr<st_room> room_ptr_type;

class HttpService
{
private:
	room_list_type *m_cached_list;
	boost::function<void(room_list_type *)> m_getrooms_callback;
	bool is_gc_setted;
	boost::function<void(bool)> m_join_room_callback;
	bool is_jr_setted;
	boost::function<void(room_ptr_type)> m_getoneroom_callback;
	bool is_goc_setted;
	static HttpService* instance;
public:
	static HttpService* getInstance();
	//���뷿��,��Ҫ����set_joinroom_cb���ûص�
	void joinRoom(std::string ipv4, std::string playerName);
	//�������䣬 ����
	void openRoom(std::string ipv4, std::string playername);
	//�����Ĵ������䣬��Ҫ����set_joinroom_cb���ûص�
	void createRoom(std::string playername);				//9-9
	//Client�뿪����, �޻ص�
	void leaveRoom(std::string ipv4);

	void get_my_room(boost::function<void(room_ptr_type)> callback);

	//Host�رշ��䣬 �޻ص�
	void closeRoom();
	//��ȡ�����б���Ҫ����set_getrooms_cb���ûص�
	void getRoomsViaHttp();
	//��ȡ����������Ϣ,��Ҫ����set_getoneroom_cb���ûص�
	void getOneRoom(std::string ipv4);						//9-9
	//���û�õ�������ص�
	void set_getoneroom_cb(boost::function<void(room_ptr_type)> callback);
	//��ȡ�����б�ص�
	void set_getrooms_cb(boost::function<void(room_list_type *)> callback);
	//��������ص�
	void set_joinroom_cb(boost::function<void(bool)> callback);
private:

	HttpService();
	room_list_type * parseRoomListJson(const char * json);
	const room_ptr_type parseRoomJson(const char * json);
	void getroom_callback(HttpClient *sender, HttpResponse *response);
	void joinroom_callback(HttpClient *sender, HttpResponse *response);
	void leaveroom_callback(HttpClient *sender, HttpResponse *response);

};
