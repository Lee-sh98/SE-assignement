#include <iostream>
#include <string>
#include "SignIn.h"
#include "SignInUI.h"

using namespace std;

SignIn::SignIn(vector<Company*>* companyList, vector<Applicant*>* applicantList) {
	this->applicantList = applicantList;
	this->companyList = companyList;
	this->signInUI = new SignInUI();
}

User* SignIn::checkUser(string ID, string password) {
	//
	int idx = 0;
	for (Company* curCom : *companyList) {
		if ((*curCom).getID().compare(ID) == 0) {
			if ((*curCom).getPW().compare(password) == 0) {
				return companyList->at(idx);
			}
		}
		++idx;
	}
	idx = 0;
	for (Applicant* curAppl : *applicantList) {
		if ((*curAppl).getID().compare(ID) == 0) {
			if ((*curAppl).getPW().compare(password) == 0) {
				return applicantList->at(idx);
			}
		}
		++idx;
	}

}

//getter
SignInUI* SignIn::getSignInUI() { return this->signInUI; }
//setter
