#include "ApplicationCollection.h"
#include <iostream>

ApplicationCollection::ApplicationCollection(){
    this->ownedApplication = new vector<Application>(); // 새로운 지원정보를 저장할 벡터를 생성함
}

ApplicationCollection::~ApplicationCollection() {
}


void ApplicationCollection::addNewApplication(string companyName, int businessNumber, Recruitment recruitment){ 
    this->ownedApplication->push_back(Application(companyName, businessNumber, recruitment)); // 벡터의 끝에 해당 지원 정보를 생성하여 저장
}

vector<Application>* ApplicationCollection::listApplication() {
    return ownedApplication;
}