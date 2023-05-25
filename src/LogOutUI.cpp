#include "LogOut.h"
#include <iostream>

using namespace std;


/*
	�Լ� �̸� : LogOutUI::startLogOutInterface()
	���	  : LogOutUI�� ���� �������̽��� �����ش�
	���� ���� : ����
	��ȯ��    : ����
*/

void LogOutUI::startLogOutInterface() {}


/*
	�Լ� �̸� : LogOutUI::logOut()
	���	  : �α׾ƿ��� ��û�� ����ڸ� �α׾ƿ� �����ش�
	���� ���� : currUser -> User�� ������, logOut -> LogOut�� ������
	��ȯ��    : ����
*/

void LogOutUI::logOut(ofstream* ofs, User*& currUser, LogOut* logOut) {
	string ID = currUser->getID();
	logOut->logOut(currUser);
	*ofs << "2.2 �α׾ƿ�" << endl << "> " << ID << endl << endl;
}