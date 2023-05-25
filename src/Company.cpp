#include "Company.h"
#include <iostream>
#include <vector>
using namespace std;
Company::Company() {
}

Company::~Company() {}

Company::Company(string companyName, int businessNumber, string id, string pw) :User(id, pw) {
    this->companyName = companyName;
    this->businessNumber = businessNumber;
    this->ownedRecruitmentCollection = RecruitmentCollection();
}

Company* Company::getCompany() {
    return this;
}

//getter
string Company::getCompanyName() { return this->companyName; }
int Company::getBusinessNumber() { return this->businessNumber; }

RecruitmentCollection* Company::listRecruitments() {
    return &(this->ownedRecruitmentCollection);
}

RecruitmentCollection* Company::getRecruitmentCollection() {
    return &(this->ownedRecruitmentCollection);
}