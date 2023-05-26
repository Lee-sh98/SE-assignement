#include <iostream>
#include "RecruitmentCollection.h"
using namespace std;
RecruitmentCollection::RecruitmentCollection() {}
RecruitmentCollection::~RecruitmentCollection() {}

// 함수 오버로딩
void RecruitmentCollection::addNewRecruitment(string job, int numberOfPeople, string deadline){
  this->ownedRecruitment.push_back(Recruitment(job, numberOfPeople, deadline)); // 벡터의 끝에 해당 지원 정보를 생성하여 저장
}
void RecruitmentCollection::addNewRecruitment(Recruitment recruitment) { // 벡터의 끝에 해당 지원 정보를 생성하여 저장
    this->ownedRecruitment.push_back(recruitment);
}
//getter
vector<Recruitment>* RecruitmentCollection::getMyRecruitmentList() {
    return &(this->ownedRecruitment);
}

vector<Recruitment>* RecruitmentCollection::listRecruitment() {
    return &(this->ownedRecruitment);
}