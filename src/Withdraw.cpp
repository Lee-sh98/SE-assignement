#include <iostream>
#include <string>
#include "Withdraw.h"
#include "WithdrawUI.h"

using namespace std;

Withdraw::Withdraw(vector<Company*>* companyList, vector<Applicant*>* applicantList) {
	this->applicantList = applicantList;
	this->companyList = companyList;
	this->withdrawUI = new WithdrawUI();
}

string Withdraw::deleteUser(string ID) {
	int idx = 0;
	for (Company* curCom : *companyList) {
		if ((*curCom).getID().compare(ID) == 0) {
			companyList->erase(companyList->begin() + idx);
			delete curCom;
		}
		++idx;
	}
	idx = 0;
	for (Applicant* curAppl : *applicantList) {
		if ((*curAppl).getID().compare(ID) == 0) {
			applicantList->erase(applicantList->begin() + idx);
			delete curAppl;
		}
		++idx;
	}

	return ID;
}

//getter
WithdrawUI* Withdraw::getWithdrawUI() { return this->withdrawUI; }
//setter
