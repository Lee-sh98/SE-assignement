#include <iostream>
#include <string>
#include <vector>
#include "CancelApplication.h"
#include "CancelApplicationUI.h"

using namespace std;

/*
	함수 이름 : CancelApplication::CancelApplication()
	기능	  : CancelApplication의 control을 생성하는 생성자
	전달 인자 : 없음
	반환값    : 생성한 CancelApplication 객체의 주소
*/
CancelApplication::CancelApplication() {
	this->cancelApplicationUI = new CancelApplicationUI();
}

/*
	함수 이름 : CancelApplication::getCancelApplicationUI()
	기능	  : CancelApplication control의 attribute중 하나인 cancelApplicationUI*를 반환하는 getter
	전달 인자 : 없음
	반환값    : CancelApplicationUI -> CancelApplicationUI의 포인터
*/
CancelApplicationUI* CancelApplication::getCancelApplicationUI() { return this->cancelApplicationUI; }

/*
	함수 이름 : CancelApplication::cancelSelectedApplication()
	기능	  : 취소시 연결된 Recruiment에 접근해 volunteerNumber를 줄이는 함수
	전달 인자 : businessNumber->취소하려는 지원 항목의 businessNumber, currentUser -> 현재 이용중인 Applicant의 포인터, company -> Company* 형 벡터 포인터
	반환값    : 없음
*/
void CancelApplication::cancelSelectedApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) {
			cur->listRecruitments()->getMyRecruitmentList()->front().decreaseVolunteerNumber();// Company -> RecruitmentCollection -> Recruitment를 통해 Recruitment접근 후 ㅍolunteerNumber 값 변경
			return;
		}
	}
}

/*
	함수 이름 : CancelApplication ::getCompanyByBusinessNumber()
	기능	  : businessNumber를 통해 그 번호의 Company를 알아내는 함수
	전달 인자 : businessNumber -> 사업자 번호, company -> Company* 형 벡터
	반환값    : &cur -> 입력된 businessNumber와 같은 번호를 가지고있는 Company의 포인터
*/
Company* CancelApplication ::getCompanyByBusinessNumber(int businessNumber, vector<Company*> company) {
	for (Company* cur : company) {
		if (cur->getBusinessNumber() == businessNumber) {//vector 내에 해당 businessNumber와 일치하는 항목을 검색
			return cur; // 찾았다면 그 항목을 반환
		}
	}
	return new Company("", 0, "", ""); // 찾지 못한경우의 값
}