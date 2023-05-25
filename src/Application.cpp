#include "Application.h"
using namespace std;


Application::Application(string companyName, int businessNumber, Recruitment recruitment){
    this->companyName = companyName;
    this->businessNumber = businessNumber;
    this->appliedRecruitment = recruitment;
}

string Application::getCompanyName() {
    return this->companyName;
}

int Application::getBusinessNumber() {
    return this->businessNumber;
}
Recruitment Application::getRecruitment() {
    return appliedRecruitment;

}