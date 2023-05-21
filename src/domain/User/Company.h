#include "User.cpp"
#include "RecruitmentCollection.cpp"

class Company:public User{
private:
    string companyName;
    int businessNumber;
    RecruitmentCollection ownedRecruitmentCollection;

public:
    Company(string companyName, int businessNumber, string id, string pw);
    Company getCompany();
    RecruitmentCollection listRecruitments();
};