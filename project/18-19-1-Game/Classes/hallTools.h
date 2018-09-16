//#pragma once
//hallTools.h
//Author:Hanyuu
//Commit:
//	���ߺ���

#ifndef HALL_TOOLS
#define HALL_TOOLS

#include<string>
#include<sstream>
#include<fstream>
//#include<boost/shared_ptr.hpp>
//#include "chatroom_server.h"
//#include"chatroom_client.h"
//#include <boost/thread.hpp>

/*
Function name:int2String
Description:��int���͵ı���ת��Ϊstring����
Created:18/08/24
Paremeter:int:��ת����int����
Return code:string ����string���
Author:Hanyuu
*/
std::string int2String(int i);

/*
Function name:float2String
Description:��float���͵ı���ת��Ϊstring����
Created:18/09/13
Paremeter:int:��ת����float����
Return code:string ����string���
Author:Hanyuu
*/
std::string float2String(float i);

/*
Function name:string2Int
Description:��string���͵ı���ת��Ϊint����
Created:18/09/05
Paremeter:int:��ת����string����
Return code:string ����int���
Author:Hanyuu
*/
int string2Int(std::string);

/*
Function name:log
Description:���log����־
Created:18/0826
Paremeter:String:Ҫ��ӡ��log��Ϣ
Return code:VOID
Author:Hanyuu
*/
void hanyuuLog(std::string);

/*
Function:connectMessage
Description:��Ϣ�շ�
Created:18/08/29
Parameter:VOID
Return:VOID
Author:Hanyuu
*/
//void connectMessage();

/*
Function name:clientGetMessage
Description:������Ϣ
Created:18/08/29
Parameter:shared_ptr:���ö��������ָ��
Return:VOID
Author:Hanyuu
*/
//void clientGetMessage(boost::shared_ptr<ChatMessage> mp);

//
////UTF-8��GB2312��ת��
//char* utf2GB(const char* utf8)
//{
//	int len = MultiByteToWideChar(CP_UTF8, 0, utf8, -1, NULL, 0);
//	wchar_t* wstr = new wchar_t[len + 1];
//	memset(wstr, 0, len + 1);
//	MultiByteToWideChar(CP_UTF8, 0, utf8, -1, wstr, len);
//	len = WideCharToMultiByte(CP_ACP, 0, wstr, -1, NULL, 0, NULL, NULL);
//	char* str = new char[len + 1];
//	memset(str, 0, len + 1);
//	WideCharToMultiByte(CP_ACP, 0, wstr, -1, str, len, NULL, NULL);
//	if (wstr) delete[] wstr;
//	return str;
//}
//
////GB2312��UTF-8��ת��
//char* GB2utf(const char* gb2312)
//{
//	int len = MultiByteToWideChar(CP_ACP, 0, gb2312, -1, NULL, 0);
//	wchar_t* wstr = new wchar_t[len + 1];
//	memset(wstr, 0, len + 1);
//	MultiByteToWideChar(CP_ACP, 0, gb2312, -1, wstr, len);
//	len = WideCharToMultiByte(CP_UTF8, 0, wstr, -1, NULL, 0, NULL, NULL);
//	char* str = new char[len + 1];
//	memset(str, 0, len + 1);
//	WideCharToMultiByte(CP_UTF8, 0, wstr, -1, str, len, NULL, NULL);
//	if (wstr) delete[] wstr;
//	return str;
//}
#endif // !HALL_TOOLS
