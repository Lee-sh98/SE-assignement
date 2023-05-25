#pragma once

//#include "../Recruitment/Recruitment.h"
#include "Recruitment.h"
using namespace std;
class Application{
private:
    string companyName;
    int businessNumber;
    Recruitment appliedRecruitment;

public:
    Application(string companyName, int businessNumber, Recruitment recruitment);
    string getCompanyName();
    int getBusinessNumber();
    Recruitment getRecruitment();
};