#include "Apply.h"
#include <iostream>
using namespace std;

Apply::Apply(){
	this->applyUI =new  ApplyUI();
}

/*
	함수 이름 : Apply::getApplyUI()
	기능	  : Apply control의 attribute중 하나인 applyUI*를 반환한다
	전달 인자 : 없음
	반환값    : ApplyUI 형 포인터
*/
ApplyUI* Apply::getApplyUI() {

	return this->applyUI;
}


/*
	함수 이름 : Apply::getCompanyByBuisinessNumber()
	기능	  : 사업자 번호에 해당하는 Company 형 포인터를 반환한다
	전달 인자 : businessNumber->int, company->Company* 형 벡터
	반환값    : Company 형 포인터
*/
Company* Apply::getCompanyByBusinessNumber(int businessNumber, vector<Company*> company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber)
			return cur;
	}
}


/*
	함수 이름 : Apply::addNewApplication()
	기능	  : 사업자 번호에 해당하는 채용 정보에 일반 사용자가 지원한다
	전달 인자 : businessNumber->int,currentUser-> Applicant 형 포인터, company->Company* 형 벡터
	반환값    : 없음
*/
void Apply::addNewApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company) {

	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) { //내가 지원하겠다는 회사
			currentUser->listApplications()->addNewApplication(cur->getCompanyName(), businessNumber, cur->listRecruitments()->listRecruitment()->front());
			cur->listRecruitments()->listRecruitment()->front().increaseVolunteerNumber();
			return;
		}
	}

}