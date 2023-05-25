#include <iostream>
#include <string>
#include "Withdraw.h"
#include "WithdrawUI.h"

using namespace std;
/*
	�Լ� �̸� : Withdraw::Withdraw()
	���	  : Withdraw control�� �����ϴ� ������
	���� ���� : companyList->Company* �� ���� ������, applicantList->Applicant* �� ���� ������
	��ȯ��    : ������ Withdraw ��ü�� �ּ�
*/
Withdraw::Withdraw(vector<Company*>* companyList, vector<Applicant*>* applicantList) {
	this->applicantList = applicantList;
	this->companyList = companyList;
	this->withdrawUI = new WithdrawUI();
}

/*
	�Լ� �̸� : Withdraw::deleteUser()
	���	  : ������� ������ �ý��ۿ��� ������
	���� ���� : ID -> ��������ϴ� ������� ID
	��ȯ��    : ID -> ���� ������� ID
*/
string Withdraw::deleteUser(string ID) {
	int idx = 0; // ���° ����ڸ� �����ϴ��� �˱����� idx����
	for (Company* curCom : *companyList) { // ��� ȸ��ȸ���� ������ ����� ���͸� ��ȸ
		if ((*curCom).getID().compare(ID) == 0) { // ��ȸ�� ȸ��ȸ���� ID�� Ż���ϰ����ϴ� ID�� ������ ���
			companyList->erase(companyList->begin() + idx); // ȸ��ȸ���� ���Ϳ��� �ش� ȸ���� ����
			delete curCom; // �߰������� �ش� ȸ�� ��ü�� �����Ѵ�
		}
		++idx;
	}
	idx = 0; // ���� �ʱ�ȭ
	for (Applicant* curAppl : *applicantList) { // ��� ������ȸ���� ������ ����� ���͸� ��ȸ
		if ((*curAppl).getID().compare(ID) == 0) { // ��ȸ�� ������ȸ���� ID�� Ż���ϰ����ϴ� ID�� ������ ���
			applicantList->erase(applicantList->begin() + idx); // ������ȸ���� ���Ϳ��� �ش� ȸ���� ����
			delete curAppl; // �߰������� �ش� ������ ��ü�� �����Ѵ�
		}
		++idx;
	}

	return ID;
}

//getter
/*
	�Լ� �̸� : Withdraw::getWithdrawUI()
	���	  : Withdraw control�� attribute�� �ϳ��� withdrawUI*�� ��ȯ�ϴ� getter
	���� ���� : ����
	��ȯ��    : withdrawUI -> WithdrawUI�� ������
*/
WithdrawUI* Withdraw::getWithdrawUI() { return this->withdrawUI; }