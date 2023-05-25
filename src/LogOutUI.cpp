#include "LogOut.h"
#include <iostream>

using namespace std;


/*
	함수 이름 : LogOutUI::startLogOutInterface()
	기능	  : LogOutUI의 시작 인터페이스를 보여준다
	전달 인자 : 없음
	반환값    : 없음
*/

void LogOutUI::startLogOutInterface() {}


/*
	함수 이름 : LogOutUI::logOut()
	기능	  : 로그아웃을 요청한 사용자를 로그아웃 시켜준다
	전달 인자 : currUser -> User형 포인터, logOut -> LogOut형 포인터
	반환값    : 없음
*/

void LogOutUI::logOut(ofstream* ofs, User*& currUser, LogOut* logOut) {
	string ID = currUser->getID();
	logOut->logOut(currUser);
	*ofs << "2.2 로그아웃" << endl << "> " << ID << endl << endl;
}