#include "SearchRecruitment.h"
#include <iostream>


SearchRecruitment::SearchRecruitment(){
	searchRecruitmentUI = new SearchRecruitmentUI();
}

/*
	함수 이름 : SearchRecruitment::getSearchRecruitmentUI()
	기능	  : SearchRecruitment의 boundary인 SearchRecruitmentUI 포인터를 반환한다
	전달 인자 : 없음
	반환값    : SearchRecruitment 형 포인터
*/
SearchRecruitmentUI* SearchRecruitment::getSearchRecruitmentUI() {

	return this->searchRecruitmentUI;
}

/*
	함수 이름 : SearchRecruitment::getBusinessNumber()
	기능	  : 검색한 회사의 사업자 번호를 반환한다.
	전달 인자 : companyName->검색한 회사 string, company->Company* 형 벡터 포인터
	반환값    : int
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
	함수 이름 : SearchRecruitment::showRecruitmentList()
	기능	  : 검색한 회사의 채용정보 Collection인 RecruitmentCollection의 포인터를 반환한다
	전달 인자 : companyName->검색한 회사 string, company->Company* 형 벡터 포인터
	반환값    : RecruitmentCollection 형 포인터
*/
RecruitmentCollection* SearchRecruitment::showRecruitmentList(string companyName, vector<Company*>* company) {
	for (Company* cur : (*company)) {
		if (cur->getCompanyName() == companyName) {
			return cur->listRecruitments();
		}
	}
}