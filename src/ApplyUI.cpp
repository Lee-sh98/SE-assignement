#include <iostream>
#include <fstream>
#include "ApplyUI.h"
#include "Apply.h"

ApplyUI::ApplyUI() {}


/*
	�Լ� �̸� : ApplyUI::startApplyInterface()
	���	  : ApplyUI�� ���� �������̽��� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void ApplyUI::startApplyInterface() {}


/*
	�Լ� �̸� : ApplyUI::apply()
	���	  : �Ϲݻ���ڰ� ä���ϱ� ��ư�� ������.
	���� ���� : applyControl->Apply �� ������, currentUser->User �� ������, company-> Company* �� ���� ����
	��ȯ��    : ����
*/
void ApplyUI::apply(ifstream* ifs, ofstream* ofs,Apply* applyControl, User* currentUser, vector<Company*>& company) {
	int businessNumber;
	*ifs >> businessNumber;	// �����Ϸ��� ä�� ������ �ĺ��Ѵ�

	Company* applyingCompany = applyControl->getCompanyByBusinessNumber(businessNumber, company);
	
	string companyName = applyingCompany->getCompanyName();
	string job = applyingCompany->listRecruitments()->listRecruitment()->front().getJob();
	applyControl->addNewApplication(businessNumber, (Applicant*)currentUser, company);	// �ش� ä�뿡 �����Ѵ�

	*ofs << "4.2. ä�� ����\n";
	*ofs << companyName << " " << businessNumber << " " << job << endl<<endl;	// ä�� ������ �Ϸ�Ǿ����� ����Ѵ�

}