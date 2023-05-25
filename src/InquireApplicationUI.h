#pragma once
//#include "../domain/User/Applicant.h"
#include "Applicant.h"

using namespace std;

class InquireApplication;

class InquireApplicationUI {
public:
	InquireApplicationUI();
	void startInquireApplicationUI();
	void displayApplications(ofstream* ofs,InquireApplication* inquireApplication, User* currentUser);
};