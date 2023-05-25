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


Recruitment Recruitment::getRecruitmentDetails() {
    return *this;
}


int Recruitment::getVolunteerNumber() {
    return this->volunteerNumber;
}

string Recruitment::getJob() {
  return this->job;
}

int Recruitment::getNumberOfPeople() {
  return this->numberOfPeople;
}

string Recruitment::getDeadline() {
  return this->deadline;
}
void Recruitment::increaseVolunteerNumber() {
    this->volunteerNumber++;
}
void Recruitment::decreaseVolunteerNumber() {
    this->volunteerNumber--;
}