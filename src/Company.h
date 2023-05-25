#pragma once
#ifndef COMPANY_H
#define COMPANY_H
#include "User.h"
#include "RecruitmentCollection.h"

using namespace std;

class Company :public User {
private:
    string companyName;
    int businessNumber;
    RecruitmentCollection ownedRecruitmentCollection;

public:
    Company();
    ~Company();
    Company(string companyName, int businessNumber, string id, string pw);
    RecruitmentCollection* listRecruitments();
    RecruitmentCollection* getRecruitmentCollection();
    
    //getter
    Company* getCompany();
    string getCompanyName();
    int getBusinessNumber();
};
#endif