#include <fstream>
#include <iostream>
#include "InquireApplicationUI.h"
//#include "../control/InquireApplication.h"
#include "InquireApplication.h"

using namespace std;


InquireApplicationUI::InquireApplicationUI() {
}


void InquireApplicationUI::startInquireApplicationUI() {}


void InquireApplicationUI::displayApplications(ofstream* ofs, InquireApplication* inquireApplication, User* currentUser) {

	ApplicationCollection* ac = inquireApplication->showApplication((Applicant*)currentUser);
	*ofs << "4.3. 지원 정보 조회\n";

	for (Application cur: *ac->listApplication()) {
		string companyName = cur.getCompanyName();
		int businessNumber = cur.getBusinessNumber();
		
		Recruitment appliedRecruitment = cur.getRecruitment();
		
		string job = appliedRecruitment.getJob();
		int numberOfPeople = appliedRecruitment.getNumberOfPeople();
		string deadline = appliedRecruitment.getDeadline();

		*ofs << companyName << " " << businessNumber << " " << job << " " << numberOfPeople << " " << deadline << endl;
	}
	*ofs << endl;
}