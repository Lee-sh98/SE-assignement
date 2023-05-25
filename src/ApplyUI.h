#pragma once
/*
#include "../domain/User/Applicant.h"
#include "../domain/User/Company.h"
*/
#include "Applicant.h"
#include "Company.h"

class Apply;

class ApplyUI {
public:
	ApplyUI();
	void startApplyInterface();
	void apply(ifstream* ifs, ofstream* ofs,Apply* applyControl, User* currentUser, vector<Company*>& company);
};