#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "CancelApplicationUI.h"
#include "CancelApplication.h"

using namespace std;

/*
	�Լ� �̸� : CancelApplicationUI::CancelApplicationUI()
	���	  : CancelApplicationUI�� ������
	���� ���� : ����
	��ȯ��    : ����
*/
CancelApplicationUI::CancelApplicationUI() { }

/*
	�Լ� �̸� : CancelApplicationUI::setCancelApplicationController()
	���	  : CancelApplicationUI�� control�� �ʱ�ȭ
	���� ���� : control -> CancelApplicationUI�� ����ϴ� CancelApplication ��ü
	��ȯ��    : ����
*/
void CancelApplicationUI::setCancelApplicationController(CancelApplication* controller) {
	this->cancelApplicationController = controller;
}

/*
	�Լ� �̸� : CancelApplicationUI::startCancelApplicaitonInterface()
	���	  : CancelApplicationUI�� ���� �������̽��� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void CancelApplicationUI::startCancelApplicaitonInterface() {

}

/*
	�Լ� �̸� : CancelApplicationUI::selectApplication()
	���	  : ������ Application�� ������ ����ϰ� ���� ��Ҹ� �����ϴ� �Լ�
	���� ���� : currentUser -> ���� ��Ҹ� �������� Applicant�� ������, company -> Company* �� ���� ������
	��ȯ��    : ����
*/
void CancelApplicationUI::selectApplication(ifstream& ifs, ofstream& ofs, Applicant* currentUser, vector<Company*>& company) {
	int bussinessNumber;
	ifs >> bussinessNumber;// bussinessNumber�� �Է¹���

	Company* cancelCompany = this->cancelApplicationController->getCompanyByBusinessNumber(bussinessNumber, company); //bussinessNumber�� ���� Company�� ã�Ƴ�
	string companyName = cancelCompany->getCompanyName(); // ������ ã�� Company���� Name ��ȯ
	string job = cancelCompany->listRecruitments()->getMyRecruitmentList()->front().getJob(); // ������ ã�� Company���� RecruitmentCollection�� Recruitment�� ���� Job ��ȯ
	this->cancelApplicationController->cancelSelectedApplication(bussinessNumber, currentUser, company); // ����� ��� �׸��� ã�� �� ���� ��Ҹ� ����

	ofs << "4.4 ���� ��� " << endl;
	ofs << companyName << " " << bussinessNumber <<" " << job << endl; // ���� ����� �׸��� ��ҵ� ���
}
