#include <iostream>
#include <string>
#include "SignUp.h"
#include "SignUpUI.h"

using namespace std;

/*
	�Լ� �̸� : SignUp::SignUp()
	���	  : SignUp�� control�� �����ϴ� ������
	���� ���� : companyList->Company* �� ���� ������, applicantList->Applicant* �� ����������
	��ȯ��    : ������ SignUp ��ü�� �ּ�
*/
SignUp::SignUp(vector<Company*>* companyList, vector<Applicant*>* applicantList) {
	this->signUpUI = new SignUpUI();
	this->companyList = companyList;
	this->applicantList = applicantList;
}

/*
	�Լ� �̸� : SignUp::addNewCompany()
	���	  : ���ο� ȸ�� ȸ�� ��ü�� ������ �� ����
	���� ���� : companyName->���ο� ȸ���, businessNumber->����ڹ�ȣ, ID->ȸ��ȸ���� ID, password->ȸ��ȸ���� PW
	��ȯ��    : �ű� ������ ȸ��ȸ���� ������ string���� ��ȯ
*/
string SignUp::addNewCompany(string companyName, int businessNumber, string ID, string password) {
	this->companyList->push_back(new Company(companyName, businessNumber, ID, password)); // ȸ��ȸ�� ��ü�� ������ �� ȸ�� ȸ���� �����ϴ� ���Ϳ� ����
	
	return string("> 1")
		.append(" ")
		.append(companyName)
		.append(" ")
		.append(to_string(businessNumber))
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
}

/*
	�Լ� �̸� : SignUp::addNewApplicant()
	���	  : ���ο� ������ ȸ�� ��ü�� ������ �� ����
	���� ���� : name->���ο� �����ڸ�, registrationNumber->�ֹι�ȣ, ID->������ȸ���� ID, password->������ȸ���� PW
	��ȯ��    : �ű� ������ ������ȸ���� ������ string���� ��ȯ
*/
string SignUp::addNewApplicant(string name, int registrationNumber, string ID, string password) {
	this->applicantList->push_back(new Applicant(name, registrationNumber, ID, password)); // ������ȸ�� ��ü�� ������ �� ������ ȸ���� �����ϴ� ���Ϳ� ����
	return string("> 2")
		.append(" ")
		.append(name)
		.append(" ")
		.append(to_string(registrationNumber))
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
}

//getter
/*
	�Լ� �̸� : SignUp::getSignUpUI()
	���	  : SignUp control�� attribute�� �ϳ��� signUpUI*�� ��ȯ�ϴ� getter
	���� ���� : ����
	��ȯ��    : signUpUI -> signUpUI�� ������
*/
SignUpUI* SignUp::getSignUpUI() { return signUpUI; }