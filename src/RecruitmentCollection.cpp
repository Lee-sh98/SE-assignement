#include "RecruitmentCollection.h"
#include <iostream>
using namespace std;
RecruitmentCollection::RecruitmentCollection() {}
RecruitmentCollection::~RecruitmentCollection() {}

// 함수 오버로딩
void RecruitmentCollection::addNewRecruitment(string job, int numberOfPeople, string deadline){
  this->ownedRecruitment.push_back(Recruitment(job, numberOfPeople, deadline));
}

void RecruitmentCollection::addNewRecruitment(Recruitment recruitment) {
    this->ownedRecruitment.push_back(recruitment);
}

vector<Recruitment>* RecruitmentCollection::getMyRecruitmentList() {
    return &(this->ownedRecruitment);
}

vector<Recruitment>* RecruitmentCollection::listRecruitment() {
    return &(this->ownedRecruitment);
}