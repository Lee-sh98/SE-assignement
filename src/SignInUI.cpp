#include <iostream>
#include <fstream>
#include <string>
#include "SignInUI.h"
#include "SignIn.h"

using namespace std;

SignInUI::SignInUI() {
}

/*
	�Լ� �̸� : SignInUI::startSignInInterface()
	���	  : SignInUI�� ���� �������̽��� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void SignInUI::startSignInInterface() {}

/*
	�Լ� �̸� : SignInUI::setSignInController()
	���	  : SignInUI�� control�� �ʱ�ȭ ��
	���� ���� : controller -> SignInUI�� ����ϴ� SignIn ��ü
	��ȯ��    : ����
*/
void SignInUI::setSignInController(SignIn* controller) {
	this->signInController = controller;
}

/*
	�Լ� �̸� : SignUpUI::createCompany()
	���	  : �α��� �Ϸ��� ȸ���� ID, PW�� �Է¹ް� control�� �����ϸ�, �α��� �� ������� �����͸� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : &currUser -> �α����� ������� ������
*/
User* SignInUI::sighIn(ifstream* ifs, ofstream* ofs){

	string ID, password;
	
	*ifs >> ID >> password; // ����ڷκ��� ID�� PW�� �Է¹޴´�
	
	User* currUser = this->signInController->checkUser(ID, password); // control�� ID, PW�� ������ ��, �α��ε� ȸ���� �����͸� ��ȯ�޴´�
	

	string str = string("> 2")
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
	
	
	*ofs << "2.1. �α���\n";
	*ofs << str;
	return &*currUser; // �α��� �� ȸ�� ��ü�� �����͸� ��ȯ�Ѵ�
}
