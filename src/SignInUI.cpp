#include <iostream>
#include <fstream>
#include <string>
#include "SignInUI.h"
#include "SignIn.h"

using namespace std;

SignInUI::SignInUI() {
}

void SignInUI::startSignInInterface() {}

void SignInUI::setSignInController(SignIn* controller) {
	this->signInController = controller;
}

User* SignInUI::sighIn(ifstream* ifs, ofstream* ofs){

	string ID, password;
	
	*ifs >> ID >> password;
	
	User* currUser = this->signInController->checkUser(ID, password);
	
	

	string str = string("> 2")
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
	
	
	*ofs << "2.1. �α���\n";
	*ofs << str;
	return &*currUser;
}
