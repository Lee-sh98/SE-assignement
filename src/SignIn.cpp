#include <iostream>
#include <string>
#include "SignIn.h"
#include "SignInUI.h"

using namespace std;

/*
	함수 이름 : SignIn::SignIn()
	기능	  : SignIn의 control을 생성하는 생성자
	전달 인자 : companyList->Company* 형 벡터 포인터, applicantList->Applicant* 형 벡터포인터
	반환값    : 생성한 SignIn 객체의 주소
*/
SignIn::SignIn(vector<Company*>* companyList, vector<Applicant*>* applicantList) {
	this->applicantList = applicantList;
	this->companyList = companyList;
	this->signInUI = new SignInUI();
}

/*
	함수 이름 : SignIn::checkUser()
	기능	  : 로그인하려는 회원객체를 찾아 로그인을 진행함
	전달 인자 : ID->로그인하려는 회원의 ID, PW->로그인하려는 회원의 PW
	반환값    : 로그인 된 회원객체의 포인터를 반환한다
*/
User* SignIn::checkUser(string ID, string password) {
	int idx = 0; // 몇번째 사용자인지 알기위한 idx변수
	for (Company* curCom : *companyList) { // 모든 회사회원의 정보가 저장된 벡터를 조회
		if ((*curCom).getID().compare(ID) == 0) { // 조회한 회사회원의 ID와 탈퇴하고자하는 ID가 동일한 경우 PW비교 진행
			if ((*curCom).getPW().compare(password) == 0) { // PW까지 동일할경우, 
				return companyList->at(idx); // 해당 객체의 주소를 반환
			}
		}
		++idx;
	}
	idx = 0; // 변수 초기화
	for (Applicant* curAppl : *applicantList) { // 모든 지원자회원의 정보가 저장된 벡터를 조회
		if ((*curAppl).getID().compare(ID) == 0) { // 조회한 지원자회원의 ID와 탈퇴하고자하는 ID가 동일한 경우 PW비교 진행
			if ((*curAppl).getPW().compare(password) == 0) { // PW까지 동일할경우, 
				return applicantList->at(idx); // 해당 객체의 주소를 반환
			}
		}
		++idx;
	}

}

//getter
/*
	함수 이름 : SignIn::getSignInUI()
	기능	  : SignIn control의 attribute중 하나인 getSignInUI*를 반환하는 getter
	전달 인자 : 없음
	반환값    : signInUI -> SignInUI의 포인터
*/
SignInUI* SignIn::getSignInUI() { return this->signInUI; }