#include <iostream>
#include <string>
#include <vector>
#include "CancelApplication.h"
#include "CancelApplicationUI.h"

using namespace std;

/*
	�Լ� �̸� : CancelApplication::CancelApplication()
	���	  : CancelApplication�� control�� �����ϴ� ������
	���� ���� : ����
	��ȯ��    : ������ CancelApplication ��ü�� �ּ�
*/
CancelApplication::CancelApplication() {
	this->cancelApplicationUI = new CancelApplicationUI();
}

/*
	�Լ� �̸� : CancelApplication::getCancelApplicationUI()
	���	  : CancelApplication control�� attribute�� �ϳ��� cancelApplicationUI*�� ��ȯ�ϴ� getter
	���� ���� : ����
	��ȯ��    : CancelApplicationUI -> CancelApplicationUI�� ������
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI() { return this->cancelApplicationUI; }

/*
	�Լ� �̸� : CancelApplication::cancelSelectedApplication()
	���	  : ��ҽ� ����� Recruiment�� ������ volunteerNumber�� ���̴� �Լ�
	���� ���� : businessNumber->����Ϸ��� ���� �׸��� businessNumber, currentUser -> ���� �̿����� Applicant�� ������, company -> Company* �� ���� ������
	��ȯ��    : ����
*/
void CancelApplication::cancelSelectedApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) {
			cur->listRecruitments()->getMyRecruitmentList()->front().decreaseVolunteerNumber();// Company -> RecruitmentCollection -> Recruitment�� ���� Recruitment���� �� ��olunteerNumber �� ����
			return;
		}
	}
}

/*
	�Լ� �̸� : CancelApplication ::getCompanyByBusinessNumber()
	���	  : businessNumber�� ���� �� ��ȣ�� Company�� �˾Ƴ��� �Լ�
	���� ���� : businessNumber -> ����� ��ȣ, company -> Company* �� ����
	��ȯ��    : &cur -> �Էµ� businessNumber�� ���� ��ȣ�� �������ִ� Company�� ������
*/
Company* CancelApplication ::getCompanyByBusinessNumber(int businessNumber, vector<Company*> company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) {//vector ���� �ش� businessNumber�� ��ġ�ϴ� �׸��� �˻�
			return cur; // ã�Ҵٸ� �� �׸��� ��ȯ
		}
	}
	return new Company("", 0, "", ""); // ã�� ���Ѱ���� ��
}