#pragma once
#include "User.h"
#include "ApplicationCollection.h"

class Applicant : public User {
private:
    string applicnatName;   // ������ ����� �̸�
    int registrationNumber; // ������ ����� �ֹι�ȣ
    ApplicationCollection* ownedApplicationCollection;  // ������ ������� ������ ������ ���� collection

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