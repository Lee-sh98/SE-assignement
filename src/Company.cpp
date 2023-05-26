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
    this->ownedRecruitmentCollection = RecruitmentCollection(); // 신규 회사 객체 생성시 채용정보 collection 함께 생성
}

Company* Company::getCompany() { // 해당 Company 객체를 반환함
    return this;
}

//getter
string Company::getCompanyName() { return this->companyName; }
int Company::getBusinessNumber() { return this->businessNumber; }
RecruitmentCollection* Company::listRecruitments() { return &(this->ownedRecruitmentCollection); }
RecruitmentCollection* Company::getRecruitmentCollection() { return &(this->ownedRecruitmentCollection); }