#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "CancelApplicationUI.h"
#include "CancelApplication.h"

using namespace std;

CancelApplicationUI::CancelApplicationUI() {

}

void CancelApplicationUI::setCancelApplicationController(CancelApplication* controller) {
	this->cancelApplicationController = controller;
}

void CancelApplicationUI::startCancelApplicaitonInterface() {

}

void CancelApplicationUI::selectApplication(ifstream& ifs, ofstream& ofs, Applicant* currentUser, vector<Company*>& company) {
	int bussinessNumber;
	ifs >> bussinessNumber;

	Company* cancelCompany = this->cancelApplicationController->getCompanyByBusinessNumber(bussinessNumber, company);
	string companyName = cancelCompany->getCompanyName();
	string job = cancelCompany->listRecruitments()->getMyRecruitmentList()->front().getJob();
	this->cancelApplicationController->cancelSelectedApplication(bussinessNumber, currentUser, company);

	ofs << "4.4 지원 취소 " << endl;
	ofs << companyName << " " << bussinessNumber <<" " << job << endl;
}
