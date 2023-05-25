#pragma once
/*
#include "../boundary/SearchRecruitmentUI.h"
#include "../domain/Recruitment/RecruitmentCollection.h"
#include "../domain/User/Applicant.h"
#include "../domain/User/Company.h"
*/
#include "SearchRecruitmentUI.h"
#include "RecruitmentCollection.h"
#include "Applicant.h"
#include "Company.h"

using namespace std;

class SearchRecruitment {
private:
	SearchRecruitmentUI* searchRecruitmentUI;
public:
	SearchRecruitment();
	SearchRecruitmentUI* getSearchRecruitmentUI();
	int getBusinessNumber(string companyName, vector<Company*>* company);
	RecruitmentCollection* showRecruitmentList(string companyName, vector<Company*>* company);
};