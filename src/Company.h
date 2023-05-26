#pragma once
#ifndef COMPANY_H
#define COMPANY_H
#include "User.h"
#include "RecruitmentCollection.h"

using namespace std;

class Company :public User {
private:
    string companyName; // 회사명
    int businessNumber; // 회사 사업자 번호
    RecruitmentCollection ownedRecruitmentCollection; // 회사 채용정보 collection class

public:
    Company();
    ~Company();
    Company(string companyName, int businessNumber, string id, string pw);
    
    //getter
    Company* getCompany();
    string getCompanyName();
    int getBusinessNumber();
    RecruitmentCollection* listRecruitments();
    RecruitmentCollection* getRecruitmentCollection();
};
#endif