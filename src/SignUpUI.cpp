#include <iostream>
#include <fstream>
#include <string>
#include "SignUpUI.h"
#include "SignUp.h"

using namespace std;

SignUpUI::SignUpUI() {
}

/*
	�Լ� �̸� : SignUpUI::setSignUpController()
	���	  : SignUpUI�� control�� �ʱ�ȭ ��
	���� ���� : controller -> SignUpUI�� ����ϴ� SignUp ��ü
	��ȯ��    : ����
*/
void SignUpUI::setSignUpController(SignUp* controller) {
	this->signUpController = controller;
}

/*
	�Լ� �̸� : SignUpUI::startSignUpInterface()
	���	  : SignUpUI�� ���� �������̽��� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void SignUpUI::startSignUpInterface() {}

/*
	�Լ� �̸� : SignUpUI::createCompany()
	���	  : ȸ�������Ϸ��� ȸ��κ��� ������ �Է��� �ް�, control�� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void SignUpUI::createCompany(ifstream* ifs, ofstream* ofs) {
	string companyName, companyID, companyPW;
	int businessNumber;
	
	*ifs >> companyName >> businessNumber >> companyID >> companyPW; // ȸ���� ������ �Է¹���
	*ofs << "1.1.ȸ������\n";
	*ofs << this->signUpController->addNewCompany(companyName, businessNumber, companyID, companyPW); // ������ control�� ����
}

/*
	�Լ� �̸� : SignUpUI::createApplicant()
	���	  : ȸ�������Ϸ��� �����ڷκ��� ������ �Է��� �ް�, control�� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void SignUpUI::createApplicant(ifstream* ifs, ofstream* ofs) {
	string name, ID, PW;
	int registrationNumber;
	*ifs >> name >> registrationNumber >> ID >> PW; // �������� ������ �Է¹���
	*ofs << "1.1.ȸ������\n";
	*ofs << this->signUpController->addNewApplicant(name, registrationNumber, ID, PW); // ������ control�� ����
}