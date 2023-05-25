#include "LogOut.h"
#include <iostream>
using namespace std;

LogOut::LogOut() {
  this->logOutUI = new LogOutUI(); // LogOutUI�� �����Ѵ�
}

/*
	�Լ� �̸� : LogOut::getLogOutUI()
	���	  : LogOutUI�� �����͸� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : LogOutUI�� ������
*/

LogOutUI* LogOut::getLogOutUI() {
  return this->logOutUI;
}

/*
	�Լ� �̸� : LogOut::logOut()
	���	  : �α׾ƿ��� ��û�� ����ڸ� �α׾ƿ� �����ش�
	���� ���� : currentUser -> User�� ������
	��ȯ��    : ����
*/

void LogOut::logOut(User*& currentUser) {
  currentUser = nullptr;
}