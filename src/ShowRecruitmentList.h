#ifndef SHOWRECRUITMENTLIST_H
#define SHOWRECRUITMENTLIST_H
#include "ShowRecruitmentListUI.h"
#include <vector>


class ShowRecruitmentList {
private:
  ShowRecruitmentListUI* showRecruitmentListUI; // ShowRecruitmentListUI과 통신하는 ShowRecruitmentList boundary 객체 
public:
  ShowRecruitmentList(); // ShowRecruitmentList 생성자
  ShowRecruitmentListUI* getShowRecruitmentListUI(); // ShowRecruitmentListUI형 포인터를 반환한다
  vector<Recruitment>* showMyRecruitmentList(Company* currentUser); // 자신이 등록한 채용정보를 보여준다
};

#endif