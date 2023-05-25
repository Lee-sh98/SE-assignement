#pragma once
#include "SearchRecruitmentUI.h"
#include "RecruitmentCollection.h"
#include "Applicant.h"
#include "Company.h"

using namespace std;

class SearchRecruitment {
private:
	SearchRecruitmentUI* searchRecruitmentUI;	// SearchRecruitmentUI�� ����ϴ� SearchRecruitmentUI ��ü(boundary)
public:
	SearchRecruitment();	// SearchRecruitment ������
	SearchRecruitmentUI* getSearchRecruitmentUI();	// SearchRecruitmentUI ��ü �����͸� ��ȯ�Ѵ�
	int getBusinessNumber(string companyName, vector<Company*>* company);	// �˻��� ȸ���� ����� ��ȣ�� ��ȯ�Ѵ�.
	RecruitmentCollection* showRecruitmentList(string companyName, vector<Company*>* company);	// �˻��� ȸ���� ä�� ������ ��ȯ�Ѵ�.
};