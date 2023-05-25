#include "LogOut.h"
#include <iostream>
using namespace std;

LogOut::LogOut() {
  this->logOutUI = new LogOutUI(); // LogOutUI를 생성한다
}

/*
	함수 이름 : LogOut::getLogOutUI()
	기능	  : LogOutUI형 포인터를 반환한다
	전달 인자 : 없음
	반환값    : LogOutUI형 포인터
*/

LogOutUI* LogOut::getLogOutUI() {
  return this->logOutUI;
}

/*
	함수 이름 : LogOut::logOut()
	기능	  : 로그아웃을 요청한 사용자를 로그아웃 시켜준다
	전달 인자 : currentUser -> User형 포인터
	반환값    : 없음
*/

void LogOut::logOut(User*& currentUser) {
  currentUser = nullptr;
}