#pragma once
#ifndef SIGNIN_H
#define SIGNIN_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "SignInUI.h"

using namespace std;

class SignIn
{
private:
	SignInUI* signInUI;
	vector<Applicant*>* applicantList;
	vector<Company*>* companyList;
public:
	SignIn(vector<Company*>* companyList, vector<Applicant*>* applicantList);
	User* checkUser(string ID, string password);
	
	//getter
	SignInUI* getSignInUI();
};
#endif 