#include "Company.h"

Company::Company(string companyName, int businessNumber, string id, string pw):User(id,pw){
    this->companyName = companyName;
    this->businessNumber = businessNumber;
}

RecruitmentCollection Company::listRecruitments(){
    
}