#include "Apply.h"
#include <iostream>
using namespace std;

Apply::Apply(){
	this->applyUI =new  ApplyUI();
}


ApplyUI* Apply::getApplyUI() {

	return this->applyUI;
}

Company* Apply::getCompanyByBusinessNumber(int businessNumber, vector<Company*> company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber)
			return cur;
	}
}

void Apply::addNewApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company) {

	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) { //내가 지원하겠다는 회사
			currentUser->listApplications()->addNewApplication(cur->getCompanyName(), businessNumber, cur->listRecruitments()->listRecruitment()->front());
			cur->listRecruitments()->listRecruitment()->front().increaseVolunteerNumber();
			return;
		}
	}

}