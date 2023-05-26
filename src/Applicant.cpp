#include "Applicant.h"
#include <iostream>
using namespace std;
Applicant::Applicant() {    
    this->ownedApplicationCollection = new ApplicationCollection(); // 신규 지원자 객체 생성시 지원서 collection 함께 생성
}

Applicant::~Applicant() {

}

Applicant::Applicant(string name, int registrationNumber, string id, string pw) :User(id, pw) {
    this->applicnatName = name;
    this->registrationNumber = registrationNumber;
    this->ownedApplicationCollection = new ApplicationCollection();
}

Applicant* Applicant::getApplicant() { return this; }
string Applicant::getApplicantName() { return this->applicnatName; }
int Applicant::getRegistrationNumber() { return this->registrationNumber; }
ApplicationCollection* Applicant::listApplications() {
    return this->ownedApplicationCollection;
}
