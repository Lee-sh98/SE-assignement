#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "CancelApplicationUI.h"
#include "CancelApplication.h"

using namespace std;

/*
	함수 이름 : CancelApplicationUI::CancelApplicationUI()
	기능	  : CancelApplicationUI의 생성자
	전달 인자 : 없음
	반환값    : 없음
*/
CancelApplicationUI::CancelApplicationUI() { }

/*
	함수 이름 : CancelApplicationUI::setCancelApplicationController()
	기능	  : CancelApplicationUI의 control을 초기화
	전달 인자 : control -> CancelApplicationUI와 통신하는 CancelApplication 객체
	반환값    : 없음
*/
void CancelApplicationUI::setCancelApplicationController(CancelApplication* controller) {
	this->cancelApplicationController = controller;
}

/*
	함수 이름 : CancelApplicationUI::startCancelApplicaitonInterface()
	기능	  : CancelApplicationUI의 시작 인터페이스를 보여줌
	전달 인자 : 없음
	반환값    : 없음
*/
void CancelApplicationUI::startCancelApplicaitonInterface() {

}

/*
	함수 이름 : CancelApplicationUI::selectApplication()
	기능	  : 선택한 Application의 정보를 출력하고 지원 취소를 진행하는 함수
	전달 인자 : currentUser -> 현재 취소를 진행중인 Applicant의 포인터, company -> Company* 형 벡터 포인터
	반환값    : 없음
*/
void CancelApplicationUI::selectApplication(ifstream& ifs, ofstream& ofs, Applicant* currentUser, vector<Company*>& company) {
	int bussinessNumber;
	ifs >> bussinessNumber;// bussinessNumber를 입력받음

	Company* cancelCompany = this->cancelApplicationController->getCompanyByBusinessNumber(bussinessNumber, company); //bussinessNumber를 통해 Company를 찾아냄
	string companyName = cancelCompany->getCompanyName(); // 위에서 찾은 Company에서 Name 반환
	string job = cancelCompany->listRecruitments()->getMyRecruitmentList()->front().getJob(); // 위에서 찾은 Company에서 RecruitmentCollection과 Recruitment를 통해 Job 반환
	this->cancelApplicationController->cancelSelectedApplication(bussinessNumber, currentUser, company); // 출력할 모든 항목을 찾은 후 지원 취소를 진행

	ofs << "4.4 지원 취소 " << endl;
	ofs << companyName << " " << bussinessNumber <<" " << job << endl; // 지원 취소한 항목의 요소들 출력
}
