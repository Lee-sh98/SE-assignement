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
	SignInUI* signInUI; // SignIn�� ����ϴ� SignUpUI ��ü 
	vector<Applicant*>* applicantList; // system�� ������ ������ �����ص� ����
	vector<Company*>* companyList; // system�� ȸ�� ������ �����ص� ����
public:
	SignIn(vector<Company*>* companyList, vector<Applicant*>* applicantList); // SignIn control ������
	User* checkUser(string ID, string password); // �α����Ϸ��� ȸ����ü�� ã�Ƽ� �����ͷ� ��ȯ�Ѵ�.
	
	//getter
	SignInUI* getSignInUI(); // SignInUI*�� ��ȯ��
};
#endif 