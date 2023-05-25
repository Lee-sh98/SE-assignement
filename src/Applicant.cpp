#include "Applicant.h"
#include <iostream>
using namespace std;
Applicant::Applicant() {
    this->ownedApplicationCollection = new ApplicationCollection();
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
