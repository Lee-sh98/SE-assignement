#pragma once
#ifndef CANCELAPPLICATION_H
#define CANCELAPPLICATION_H

#include "CancelApplicationUI.h"
#include "Application.h"
#include "Recruitment.h"
#include <vector>

class CancelApplication {
private:
	CancelApplicationUI* cancelApplicationUI; // CancelApplicationUI와 통신하는 CancelApplication 객체(control)
public:
	CancelApplication(); // CancelApplication의 control을 생성하는 생성자
	CancelApplicationUI* getCancelApplicationUI(); //CancelApplication control의 attribute중 하나인 cancelApplicationUI* 를 반환하는 getter
	Company* getCompanyByBusinessNumber(int businessNumber, vector<Company*> company); // businessNumber를 통해 그 번호의 Company를 알아내는 함수
	void cancelSelectedApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company); //취소시 연결된 Recruiment에 접근해 volunteerNumber를 줄이는 함수 
};


#endif