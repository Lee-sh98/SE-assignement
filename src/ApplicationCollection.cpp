#include "ApplicationCollection.h"
#include <iostream>

ApplicationCollection::ApplicationCollection(){
    this->ownedApplication = new vector<Application>(); // ���ο� ���������� ������ ���͸� ������
}

ApplicationCollection::~ApplicationCollection() {
}


void ApplicationCollection::addNewApplication(string companyName, int businessNumber, Recruitment recruitment){ 
    this->ownedApplication->push_back(Application(companyName, businessNumber, recruitment)); // ������ ���� �ش� ���� ������ �����Ͽ� ����
}

vector<Application>* ApplicationCollection::listApplication() {
    return ownedApplication;
}