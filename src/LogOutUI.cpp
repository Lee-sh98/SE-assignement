#include "LogOut.h"
#include <iostream>

using namespace std;

void LogOutUI::startLogOutInterface() {}

void LogOutUI::logOut(ofstream* ofs, User*& currUser, LogOut* logOut) {
	string ID = currUser->getID();
	logOut->logOut(currUser);
	*ofs << "2.2 �α׾ƿ�" << endl << "> " << ID << endl << endl;
}