#pragma once
#ifndef LOGOUT_H
#define LOGOUT_H

#include <iostream>
#include <string>
#include "LogOutUI.h"
#include "User.h"

class LogOut {
private:
  LogOutUI* logOutUI; // LogOutUI�� ����ϴ� LogOut boundary ��ü 
public:
  LogOut(); // LogOut ������
  LogOutUI* getLogOutUI(); // LogOutUI�� �����͸� ��ȯ�Ѵ�
  void logOut(User*& currentUser); // �α׾ƿ��� ��û�� ����ڸ� �α׾ƿ� �����ش�
};

#endif