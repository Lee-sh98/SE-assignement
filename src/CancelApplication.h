#pragma once
#ifndef CANCELAPPLICATION_H
#define CANCELAPPLICATION_H

#include "CancelApplicationUI.h"
#include "Application.h"
#include "Recruitment.h"
#include <vector>

class CancelApplication {
private:
	CancelApplicationUI* cancelApplicationUI;
public:
	CancelApplication();
	CancelApplicationUI* getCancelApplicationUI();
	Company* getCompanyByBusinessNumber(int businessNumber, vector<Company*> company);
	void cancelSelectedApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company);
};


#endif