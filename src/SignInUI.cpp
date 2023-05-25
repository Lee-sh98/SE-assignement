#include <iostream>
#include <fstream>
#include <string>
#include "SignInUI.h"
#include "SignIn.h"

using namespace std;

SignInUI::SignInUI() {
}

/*
	함수 이름 : SignInUI::startSignInInterface()
	기능	  : SignInUI의 시작 인터페이스를 보여줌
	전달 인자 : 없음
	반환값    : 없음
*/
void SignInUI::startSignInInterface() {}

/*
	함수 이름 : SignInUI::setSignInController()
	기능	  : SignInUI의 control을 초기화 함
	전달 인자 : controller -> SignInUI와 통신하는 SignIn 객체
	반환값    : 없음
*/
void SignInUI::setSignInController(SignIn* controller) {
	this->signInController = controller;
}

/*
	함수 이름 : SignUpUI::createCompany()
	기능	  : 로그인 하려는 회원의 ID, PW를 입력받고 control에 전달하며, 로그인 된 사용자의 포인터를 반환한다
	전달 인자 : 없음
	반환값    : &currUser -> 로그인한 사용자의 포인터
*/
User* SignInUI::sighIn(ifstream* ifs, ofstream* ofs){

	string ID, password;
	
	*ifs >> ID >> password; // 사용자로부터 ID와 PW를 입력받는다
	
	User* currUser = this->signInController->checkUser(ID, password); // control로 ID, PW를 전달한 후, 로그인된 회원의 포인터를 반환받는다
	

	string str = string("> 2")
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
	
	
	*ofs << "2.1. 로그인\n";
	*ofs << str;
	return &*currUser; // 로그인 된 회원 객체의 포인터를 반환한다
}
