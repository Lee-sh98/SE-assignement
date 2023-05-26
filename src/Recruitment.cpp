#include "Recruitment.h"
#include <iostream>

Recruitment::Recruitment() {
    this->job = "";
    this->numberOfPeople = 0;
    this->deadline = "";
    this->volunteerNumber = 0;
}

Recruitment::Recruitment(string job, int numberOfPeople, string deadline){
    this->job = job;
    this->numberOfPeople = numberOfPeople;
    this->deadline = deadline;
    this->volunteerNumber = 0;
}

void Recruitment::increaseVolunteerNumber() { // 새로운 지원자 발생 시, 지원자 수를 증가 시킴
    this->volunteerNumber++;
}
void Recruitment::decreaseVolunteerNumber() { // 지원자가 취소할 경우 지원자 수를 감소 시킴
    this->volunteerNumber--;
}

//getter
Recruitment Recruitment::getRecruitmentDetails() { return *this; }
int Recruitment::getVolunteerNumber() { return this->volunteerNumber; }
string Recruitment::getJob() { return this->job; }
int Recruitment::getNumberOfPeople() { return this->numberOfPeople; }
string Recruitment::getDeadline() { return this->deadline; }
