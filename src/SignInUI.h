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
	SignIn* signInController; // SignInUI�� ����ϴ� SignIn ��ü(control)
public:
	SignInUI();
	void startSignInInterface(); // SignInUI�� ���� �������̽��� ������
	void setSignInController(SignIn* controller); // SignInUI�� control�� �ʱ�ȭ ��
	User* sighIn(ifstream* ifs, ofstream* ofs); // �α��� �Ϸ��� ȸ���� ID, PW�� �Է¹ް�, �α��� �� ������� �����͸� ��ȯ�Ѵ�
};

#endif