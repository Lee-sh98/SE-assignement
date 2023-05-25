#include "SearchRecruitment.h"
#include <iostream>


SearchRecruitment::SearchRecruitment(){
	searchRecruitmentUI = new SearchRecruitmentUI();
}

/*
	�Լ� �̸� : SearchRecruitment::getSearchRecruitmentUI()
	���	  : SearchRecruitment�� boundary�� SearchRecruitmentUI �����͸� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : SearchRecruitment �� ������
*/
SearchRecruitmentUI* SearchRecruitment::getSearchRecruitmentUI() {

	return this->searchRecruitmentUI;
}

/*
	�Լ� �̸� : SearchRecruitment::getBusinessNumber()
	���	  : �˻��� ȸ���� ����� ��ȣ�� ��ȯ�Ѵ�.
	���� ���� : companyName->�˻��� ȸ�� string, company->Company* �� ���� ������
	��ȯ��    : int
*/
int SearchRecruitment::getBusinessNumber(string companyName, vector<Company*>* company) {
	for (Company* cur: *company) {
		if (cur->getCompanyName() == companyName) {
			return cur->getBusinessNumber();
		}
	}
	return 0;
}



/*
	�Լ� �̸� : SearchRecruitment::showRecruitmentList()
	���	  : �˻��� ȸ���� ä������ Collection�� RecruitmentCollection�� �����͸� ��ȯ�Ѵ�
	���� ���� : companyName->�˻��� ȸ�� string, company->Company* �� ���� ������
	��ȯ��    : RecruitmentCollection �� ������
*/
RecruitmentCollection* SearchRecruitment::showRecruitmentList(string companyName, vector<Company*>* company) {
	for (Company* cur : (*company)) {
		if (cur->getCompanyName() == companyName) {
			return cur->listRecruitments();
		}
	}
}