#include <iostream>
#include <string>
#include <vector>
#include "CancelApplication.h"
#include "CancelApplicationUI.h"

using namespace std;

CancelApplication::CancelApplication() {
	this->cancelApplicationUI = new CancelApplicationUI();
}

CancelApplicationUI* CancelApplication::getCancelApplicationUI() { return this->cancelApplicationUI; }

void CancelApplication::cancelSelectedApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) {
			cur->listRecruitments()->getMyRecruitmentList()->front().decreaseVolunteerNumber();
			return;
		}
	}
}

Company* CancelApplication ::getCompanyByBusinessNumber(int businessNumber, vector<Company*> company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) {
			return cur;
		}
	}
	return new Company("", 0, "", "");
}