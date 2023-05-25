#pragma once
#ifndef SIGNIN_H
#define SIGNIN_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "SignInUI.h"

using namespace std;

class SignIn
{
private:
	SignInUI* signInUI; // SignIn와 통신하는 SignUpUI 객체 
	vector<Applicant*>* applicantList; // system의 지원자 정보를 저장해둔 벡터
	vector<Company*>* companyList; // system의 회사 정보를 저장해둔 벡터
public:
	SignIn(vector<Company*>* companyList, vector<Applicant*>* applicantList); // SignIn control 생성자
	User* checkUser(string ID, string password); // 로그인하려는 회원객체를 찾아서 포인터로 반환한다.
	
	//getter
	SignInUI* getSignInUI(); // SignInUI*를 반환함
};
#endif 