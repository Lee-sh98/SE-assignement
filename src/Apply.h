#pragma once

#include <vector>
/*
#include "../domain/User/Applicant.h"
#include "../domain/User/Company.h"
#include "../boundary/ApplyUI.h"
*/
#include "Applicant.h"
#include "Company.h"
#include "ApplyUI.h"

class Apply {
private:
	ApplyUI* applyUI;
public:
	Apply();
	ApplyUI* getApplyUI();
	Company* getCompanyByBusinessNumber(int businessNumber, vector<Company*> company);
	void addNewApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company);
};