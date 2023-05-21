#include "User.cpp"
#include "ApplicationCollection.cpp"

class Applicant: public User{
private:
    string applicnatName;
    int registrationNumber;
    ApplicationCollection ownedApplicationCollection;

public:
    Applicant(string name, int registrationNumber, string id, string pw);
    Applicant getApplicant();
    ApplicationCollection listApplications();
};