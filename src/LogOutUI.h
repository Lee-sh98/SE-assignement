#ifndef LOGOUTUI_H
#define LOGOUTUI_H
#include "User.h"
#include <fstream>

class LogOut;

class LogOutUI {
public:
  void startLogOutInterface(); // LogOutUI�� ���� �������̽��� �����ش�
  void logOut(ofstream* ofs, User*& currentUser, LogOut* logOut); // �α׾ƿ��� ��û�� ����ڸ� �α׾ƿ� �����ش�
};
#endif