#include "SearchRecruitment.h"
#include <iostream>

SearchRecruitment::SearchRecruitment(){
	searchRecruitmentUI = new SearchRecruitmentUI();
}

SearchRecruitmentUI* SearchRecruitment::getSearchRecruitmentUI() {

	return this->searchRecruitmentUI;
}


int SearchRecruitment::getBusinessNumber(string companyName, vector<Company*>* company) {
	for (Company* cur: *company) {
		if (cur->getCompanyName() == companyName) {
			return cur->getBusinessNumber();
		}
	}
	return 0;
}

RecruitmentCollection* SearchRecruitment::showRecruitmentList(string companyName, vector<Company*>* company) {
	for (Company* cur : (*company)) {
		if (cur->getCompanyName() == companyName) {
			return cur->listRecruitments();
		}
	}
}