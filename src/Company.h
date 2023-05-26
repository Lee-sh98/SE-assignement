#pragma once
#ifndef COMPANY_H
#define COMPANY_H
#include "User.h"
#include "RecruitmentCollection.h"

using namespace std;

class Company :public User {
private:
    string companyName; // ȸ���
    int businessNumber; // ȸ�� ����� ��ȣ
    RecruitmentCollection ownedRecruitmentCollection; // ȸ�� ä������ collection class

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