#pragma once
#ifndef SIGHUP_H
#define SIGHUP_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "SignUpUI.h"

using namespace std;


class SignUp
{
private:
    SignUpUI* signUpUI;
    vector<Applicant*>* applicantList;
    vector<Company*>* companyList;
public:
    SignUp(vector<Company*>* companyList, vector<Applicant*>* applicantList);
    string addNewCompany(string companyName, int businessNumber, string ID, string password);
    string addNewApplicant(string companyName, int registrationNumber, string ID, string password);
    
    // getter
    //Applicant** getApplicantList();
    //Company** getCompanyList();
    SignUpUI* getSignUpUI();
    // setter
};
#endif 