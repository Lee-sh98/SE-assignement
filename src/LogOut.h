#pragma once
#ifndef LOGOUT_H
#define LOGOUT_H

#include <iostream>
#include <string>
#include "LogOutUI.h"
#include "User.h"

class LogOut {
private:
  LogOutUI* logOutUI; // LogOutUI와 통신하는 LogOut boundary 객체 
public:
  LogOut(); // LogOut 생성자
  LogOutUI* getLogOutUI(); // LogOutUI형 포인터를 반환한다
  void logOut(User*& currentUser); // 로그아웃을 요청한 사용자를 로그아웃 시켜준다
};

#endif