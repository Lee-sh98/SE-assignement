#ifndef LOGOUTUI_H
#define LOGOUTUI_H
#include "User.h"
#include <fstream>

class LogOut;

class LogOutUI {
public:
  void startLogOutInterface(); // LogOutUI의 시작 인터페이스를 보여준다
  void logOut(ofstream* ofs, User*& currentUser, LogOut* logOut); // 로그아웃을 요청한 사용자를 로그아웃 시켜준다
};
#endif