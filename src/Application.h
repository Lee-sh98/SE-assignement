#pragma once
#include "Recruitment.h"
using namespace std;
class Application{  // 지원서 class
private:
    string companyName; // 지원 회사명
    int businessNumber; // 지원 회사 사업자 번호
    Recruitment appliedRecruitment; // 지원한 채용정보

public:
    Application(string companyName, int businessNumber, Recruitment recruitment);
    //getter
    string getCompanyName();
    int getBusinessNumber();
    Recruitment getRecruitment();
};