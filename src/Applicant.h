#pragma once
#include "User.h"
#include "ApplicationCollection.h"

class Applicant : public User {
private:
    string applicnatName;   // 지원자 사용자 이름
    int registrationNumber; // 지원자 사용자 주민번호
    ApplicationCollection* ownedApplicationCollection;  // 지원자 사용자의 지원서 정보를 갖는 collection

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