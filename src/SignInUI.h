#pragma once
#ifndef SIGHINUI_H
#define SIGHINUI_H
#include <iostream>
#include <fstream>
#include <string>
#include "User.h"

using namespace std;

class SignIn;

class SignInUI
{
private:
	SignIn* signInController; // SignInUI와 통신하는 SignIn 객체(control)
public:
	SignInUI();
	void startSignInInterface(); // SignInUI의 시작 인터페이스를 보여줌
	void setSignInController(SignIn* controller); // SignInUI의 control을 초기화 함
	User* sighIn(ifstream* ifs, ofstream* ofs); // 로그인 하려는 회원의 ID, PW를 입력받고, 로그인 된 사용자의 포인터를 반환한다
};

#endif