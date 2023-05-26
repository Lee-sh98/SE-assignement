#pragma once
#include "Recruitment.h"
using namespace std;
class Application{  // ������ class
private:
    string companyName; // ���� ȸ���
    int businessNumber; // ���� ȸ�� ����� ��ȣ
    Recruitment appliedRecruitment; // ������ ä������

public:
    Application(string companyName, int businessNumber, Recruitment recruitment);
    //getter
    string getCompanyName();
    int getBusinessNumber();
    Recruitment getRecruitment();
};