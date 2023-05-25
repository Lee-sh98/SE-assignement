#pragma once
#ifndef CANCELAPPLICATIONUI_H
#define CANCELAPPLICATIONUI_H

#include <iostream>
#include <fstream>
#include "Applicant.h"
#include "Company.h"

using namespace std;

class CancelApplication;

class CancelApplicationUI {
private:
	CancelApplication* cancelApplicationController;

public:
	CancelApplicationUI();
	void setCancelApplicationController(CancelApplication* controller);
	void startCancelApplicaitonInterface();
	void selectApplication(ifstream& ifs, ofstream& ofs, Applicant* currentUser, vector<Company*>& company);
};

#endif