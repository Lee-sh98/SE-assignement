#include "ShowRecruitmentList.h"
#include <iostream>

using namespace std;

ShowRecruitmentList::ShowRecruitmentList() {
  this->showRecruitmentListUI = new ShowRecruitmentListUI();
}

ShowRecruitmentListUI* ShowRecruitmentList::getShowRecruitmentListUI() {
  return this->showRecruitmentListUI;
}

vector<Recruitment>* ShowRecruitmentList::showMyRecruitmentList(Company* currentUser) {
	return currentUser->getRecruitmentCollection()->getMyRecruitmentList();
}