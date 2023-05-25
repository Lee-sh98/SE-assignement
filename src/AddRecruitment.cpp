#include "AddRecruitment.h"


AddRecruitment::AddRecruitment() {
  this->addRecruitmentUI = new AddRecruitmentUI(); // AddRecruitmentUI 생성
}

/*
	함수 이름 : AddRecruitmentUI::getAddRecruitmentUI()
	기능	  : AddRecruitmentUI의 포인터를 반환한다
	전달 인자 : 없음
	반환값    : AddRecruitmentUI형 포인터
*/

AddRecruitmentUI* AddRecruitment::getAddRecruitmentUI() {
  return this->addRecruitmentUI;
}

/*
	함수 이름 : AddRecruitmentUI::addNewRecruitment()
	기능	  : 회사회원이 채용정보를 등록한다
	전달 인자 : job -> string, numberOfPeople -> int, deadline -> string, currentUser -> Company형 포인터
	반환값    : 없음
*/

void AddRecruitment::addNewRecruitment(string job, int numberOfPeople, string deadline, Company* currentUser) {
	currentUser->getRecruitmentCollection()->addNewRecruitment(job, numberOfPeople, deadline);
}