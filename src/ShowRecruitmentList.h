#ifndef SHOWRECRUITMENTLIST_H
#define SHOWRECRUITMENTLIST_H
#include "ShowRecruitmentListUI.h"
#include <vector>


class ShowRecruitmentList {
private:
  ShowRecruitmentListUI* showRecruitmentListUI;
public:
  ShowRecruitmentList();
  ShowRecruitmentListUI* getShowRecruitmentListUI();
  vector<Recruitment>* showMyRecruitmentList(Company* currentUser);
};

#endif