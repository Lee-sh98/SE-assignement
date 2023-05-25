#include "InquireApplication.h"
#include <iostream>

InquireApplication::InquireApplication() {
}

/*
	함수 이름 : InquireApplication::getInquireApplicationUI()
	기능	  : InquireApplication control의 attribute중 하나인 inquireApplicationUI*를 반환한다
	전달 인자 : 없음
	반환값    : InquireApplication 형 포인터
*/
InquireApplicationUI* InquireApplication::getInquireApplicationUI() {

	return this->inquireApplicationUI;
}


/*
	함수 이름 : InquireApplication::showApplication()
	기능	  : 자신이 지원한 정보를 조회한다
	전달 인자 : applicant->Applicant 형 포인터
	반환값    : ApplicationCollection 형 포인터
*/
ApplicationCollection* InquireApplication::showApplication(Applicant* applicant) {
	return applicant->listApplications();
}