#pragma once
#include "SearchRecruitmentUI.h"
#include "RecruitmentCollection.h"
#include "Applicant.h"
#include "Company.h"

using namespace std;

class SearchRecruitment {
private:
	SearchRecruitmentUI* searchRecruitmentUI;	// SearchRecruitmentUI와 통신하는 SearchRecruitmentUI 객체(boundary)
public:
	SearchRecruitment();	// SearchRecruitment 생성자
	SearchRecruitmentUI* getSearchRecruitmentUI();	// SearchRecruitmentUI 객체 포인터를 반환한다
	int getBusinessNumber(string companyName, vector<Company*>* company);	// 검색한 회사의 사업자 번호를 반환한다.
	RecruitmentCollection* showRecruitmentList(string companyName, vector<Company*>* company);	// 검색한 회사의 채용 정보를 반환한다.
};