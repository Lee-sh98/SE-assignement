#pragma once
#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "WithdrawUI.h"

using namespace std;

class Withdraw
{
private:
	WithdrawUI* withdrawUI;
	vector<Applicant*>* applicantList;
	vector<Company*>* companyList;
public:
	Withdraw(vector<Company*>* companyList, vector<Applicant*>* applicantList);
	string deleteUser(string ID);

	//getter
	WithdrawUI* getWithdrawUI();
};
#endif 