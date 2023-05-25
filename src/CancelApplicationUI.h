#pragma once
#ifndef CANCELAPPLICATIONUI_H
#define CANCELAPPLICATIONUI_H

#include <iostream>
#include <fstream>
#include "Applicant.h"
#include "Company.h"

using namespace std;

class CancelApplication;

class CancelApplicationUI {
private:
	CancelApplication* cancelApplicationController; // CancelApplicationUI와 통신하는 CancelApplication 객체 (control)

public:
	CancelApplicationUI(); // CancelApplicationUI의 생성자
	void setCancelApplicationController(CancelApplication* controller); // CancelApplicationUI의 control을 초기화
	void startCancelApplicaitonInterface(); // CancelApplicationUI의 시작 인터페이스를 보여줌
	void selectApplication(ifstream& ifs, ofstream& ofs, Applicant* currentUser, vector<Company*>& company); // 선택한 Application의 정보를 출력하고 지원 취소를 진행하는 함수
};

#endif