#pragma once
#include "User.h"
#include "ApplicationCollection.h"

class Applicant : public User {
private:
    string applicnatName;
    int registrationNumber;
    ApplicationCollection* ownedApplicationCollection;

public:
    Applicant();
    ~Applicant();
    Applicant(string name, int registrationNumber, string id, string pw);

    //getter
    Applicant* getApplicant();
    string getApplicantName();
    int getRegistrationNumber();
    ApplicationCollection* listApplications();
};