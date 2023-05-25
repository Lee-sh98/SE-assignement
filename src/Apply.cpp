#include "Apply.h"
#include <iostream>
using namespace std;

Apply::Apply(){
	this->applyUI =new  ApplyUI();
}

/*
	�Լ� �̸� : Apply::getApplyUI()
	���	  : Apply control�� attribute�� �ϳ��� applyUI*�� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : ApplyUI �� ������
*/
ApplyUI* Apply::getApplyUI() {

	return this->applyUI;
}


/*
	�Լ� �̸� : Apply::getCompanyByBuisinessNumber()
	���	  : ����� ��ȣ�� �ش��ϴ� Company �� �����͸� ��ȯ�Ѵ�
	���� ���� : businessNumber->int, company->Company* �� ����
	��ȯ��    : Company �� ������
*/
Company* Apply::getCompanyByBusinessNumber(int businessNumber, vector<Company*> company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber)
			return cur;
	}
}


/*
	�Լ� �̸� : Apply::addNewApplication()
	���	  : ����� ��ȣ�� �ش��ϴ� ä�� ������ �Ϲ� ����ڰ� �����Ѵ�
	���� ���� : businessNumber->int,currentUser-> Applicant �� ������, company->Company* �� ����
	��ȯ��    : ����
*/
void Apply::addNewApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company) {

	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) { //���� �����ϰڴٴ� ȸ��
			currentUser->listApplications()->addNewApplication(cur->getCompanyName(), businessNumber, cur->listRecruitments()->listRecruitment()->front());
			cur->listRecruitments()->listRecruitment()->front().increaseVolunteerNumber();
			return;
		}
	}

}