#include "ShowRecruitmentList.h"
#include <iostream>

using namespace std;

ShowRecruitmentList::ShowRecruitmentList() {
  this->showRecruitmentListUI = new ShowRecruitmentListUI(); // ShowRecruitmentListUI를 생성한다
}


/*
	함수 이름 : ShowRecruitmentList::getShowRecruitmentListUI()
	기능	  : ShowRecruitmentListUI형 포인터를 반환한다
	전달 인자 : 없음
	반환값    : ShowRecruitmentListUI형 포인터
*/

ShowRecruitmentListUI* ShowRecruitmentList::getShowRecruitmentListUI() {
  return this->showRecruitmentListUI;
}


/*
	함수 이름 : ShowRecruitmentList::showMyRecruitmentList()
	기능	  : 자신이 등록한 채용정보를 보여준다
	전달 인자 : currentUser -> Company형 포인터
	반환값    : Recruitment형 벡터 포인터
*/

vector<Recruitment>* ShowRecruitmentList::showMyRecruitmentList(Company* currentUser) {
	return currentUser->getRecruitmentCollection()->getMyRecruitmentList();
}