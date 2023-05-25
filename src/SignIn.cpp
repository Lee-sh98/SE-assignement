#include <iostream>
#include <string>
#include "SignIn.h"
#include "SignInUI.h"

using namespace std;

/*
	�Լ� �̸� : SignIn::SignIn()
	���	  : SignIn�� control�� �����ϴ� ������
	���� ���� : companyList->Company* �� ���� ������, applicantList->Applicant* �� ����������
	��ȯ��    : ������ SignIn ��ü�� �ּ�
*/
SignIn::SignIn(vector<Company*>* companyList, vector<Applicant*>* applicantList) {
	this->applicantList = applicantList;
	this->companyList = companyList;
	this->signInUI = new SignInUI();
}

/*
	�Լ� �̸� : SignIn::checkUser()
	���	  : �α����Ϸ��� ȸ����ü�� ã�� �α����� ������
	���� ���� : ID->�α����Ϸ��� ȸ���� ID, PW->�α����Ϸ��� ȸ���� PW
	��ȯ��    : �α��� �� ȸ����ü�� �����͸� ��ȯ�Ѵ�
*/
User* SignIn::checkUser(string ID, string password) {
	int idx = 0; // ���° ��������� �˱����� idx����
	for (Company* curCom : *companyList) { // ��� ȸ��ȸ���� ������ ����� ���͸� ��ȸ
		if ((*curCom).getID().compare(ID) == 0) { // ��ȸ�� ȸ��ȸ���� ID�� Ż���ϰ����ϴ� ID�� ������ ��� PW�� ����
			if ((*curCom).getPW().compare(password) == 0) { // PW���� �����Ұ��, 
				return companyList->at(idx); // �ش� ��ü�� �ּҸ� ��ȯ
			}
		}
		++idx;
	}
	idx = 0; // ���� �ʱ�ȭ
	for (Applicant* curAppl : *applicantList) { // ��� ������ȸ���� ������ ����� ���͸� ��ȸ
		if ((*curAppl).getID().compare(ID) == 0) { // ��ȸ�� ������ȸ���� ID�� Ż���ϰ����ϴ� ID�� ������ ��� PW�� ����
			if ((*curAppl).getPW().compare(password) == 0) { // PW���� �����Ұ��, 
				return applicantList->at(idx); // �ش� ��ü�� �ּҸ� ��ȯ
			}
		}
		++idx;
	}

}

//getter
/*
	�Լ� �̸� : SignIn::getSignInUI()
	���	  : SignIn control�� attribute�� �ϳ��� getSignInUI*�� ��ȯ�ϴ� getter
	���� ���� : ����
	��ȯ��    : signInUI -> SignInUI�� ������
*/
SignInUI* SignIn::getSignInUI() { return this->signInUI; }