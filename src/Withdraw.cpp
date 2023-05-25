#include <iostream>
#include <string>
#include "Withdraw.h"
#include "WithdrawUI.h"

using namespace std;
/*
	함수 이름 : Withdraw::Withdraw()
	기능	  : Withdraw control을 생성하는 생성자
	전달 인자 : companyList->Company* 형 벡터 포인터, applicantList->Applicant* 형 벡터 포인터
	반환값    : 생성한 Withdraw 객체의 주소
*/
Withdraw::Withdraw(vector<Company*>* companyList, vector<Applicant*>* applicantList) {
	this->applicantList = applicantList;
	this->companyList = companyList;
	this->withdrawUI = new WithdrawUI();
}

/*
	함수 이름 : Withdraw::deleteUser()
	기능	  : 사용자의 정보를 시스템에서 삭제함
	전달 인자 : ID -> 지우고자하는 사용자의 ID
	반환값    : ID -> 지운 사용자의 ID
*/
string Withdraw::deleteUser(string ID) {
	int idx = 0; // 몇번째 사용자를 삭제하는지 알기위한 idx변수
	for (Company* curCom : *companyList) { // 모든 회사회원의 정보가 저장된 벡터를 조회
		if ((*curCom).getID().compare(ID) == 0) { // 조회한 회사회원의 ID와 탈퇴하고자하는 ID가 동일한 경우
			companyList->erase(companyList->begin() + idx); // 회사회원의 벡터에서 해당 회원을 삭제
			delete curCom; // 추가적으로 해당 회사 객체를 해제한다
		}
		++idx;
	}
	idx = 0; // 변수 초기화
	for (Applicant* curAppl : *applicantList) { // 모든 지원자회원의 정보가 저장된 벡터를 조회
		if ((*curAppl).getID().compare(ID) == 0) { // 조회한 지원자회원의 ID와 탈퇴하고자하는 ID가 동일한 경우
			applicantList->erase(applicantList->begin() + idx); // 지원자회원의 벡터에서 해당 회원을 삭제
			delete curAppl; // 추가적으로 해당 지원자 객체를 해제한다
		}
		++idx;
	}

	return ID;
}

//getter
/*
	함수 이름 : Withdraw::getWithdrawUI()
	기능	  : Withdraw control의 attribute중 하나인 withdrawUI*를 반환하는 getter
	전달 인자 : 없음
	반환값    : withdrawUI -> WithdrawUI의 포인터
*/
WithdrawUI* Withdraw::getWithdrawUI() { return this->withdrawUI; }