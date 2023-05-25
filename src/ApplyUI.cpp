#include <iostream>
#include <fstream>
#include "ApplyUI.h"
//#include "../control/Apply.h"
#include "Apply.h"

ApplyUI::ApplyUI() {

}

void ApplyUI::apply(ifstream* ifs, ofstream* ofs,Apply* applyControl, User* currentUser, vector<Company*>& company) {
	int businessNumber;
	*ifs >> businessNumber;

	Company* applyingCompany = applyControl->getCompanyByBusinessNumber(businessNumber, company);
	
	string companyName = applyingCompany->getCompanyName();
	string job = applyingCompany->listRecruitments()->listRecruitment()->front().getJob();
	applyControl->addNewApplication(businessNumber, (Applicant*)currentUser, company);

	*ofs << "4.2. 채용 지원\n";
	*ofs << companyName << " " << businessNumber << " " << job << endl<<endl;

}