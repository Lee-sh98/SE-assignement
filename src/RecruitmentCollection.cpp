#include <iostream>
#include "RecruitmentCollection.h"
using namespace std;
RecruitmentCollection::RecruitmentCollection() {}
RecruitmentCollection::~RecruitmentCollection() {}

// �Լ� �����ε�
void RecruitmentCollection::addNewRecruitment(string job, int numberOfPeople, string deadline){
  this->ownedRecruitment.push_back(Recruitment(job, numberOfPeople, deadline)); // ������ ���� �ش� ���� ������ �����Ͽ� ����
}
void RecruitmentCollection::addNewRecruitment(Recruitment recruitment) { // ������ ���� �ش� ���� ������ �����Ͽ� ����
    this->ownedRecruitment.push_back(recruitment);
}
//getter
vector<Recruitment>* RecruitmentCollection::getMyRecruitmentList() {
    return &(this->ownedRecruitment);
}

vector<Recruitment>* RecruitmentCollection::listRecruitment() {
    return &(this->ownedRecruitment);
}