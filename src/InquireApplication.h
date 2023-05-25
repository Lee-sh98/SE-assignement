#pragma once

#include "Applicant.h"
#include "InquireApplicationUI.h"

class InquireApplication {
private:
	InquireApplicationUI* inquireApplicationUI;	// InquireApplicationUI과 통신하는 InquireApplication boundary 객체 
public:
	InquireApplication();	// InquireApplication 클래스 생성자
	InquireApplicationUI* getInquireApplicationUI();	// inquireApplicationUI*를 반환한다
	ApplicationCollection* showApplication(Applicant* applicant);	// 자신이 지원한 정보를 조회한다

};