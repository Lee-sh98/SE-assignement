#pragma once

#include <vector>
#include "Applicant.h"
#include "Company.h"
#include "ApplyUI.h"

class Apply {
private:
	ApplyUI* applyUI;	// Apply와 통신하는 ApplyUI 객체 
public:
	Apply();	// Apply클래스 생성자
	ApplyUI* getApplyUI();	// applyUI*를 반환한다
	Company* getCompanyByBusinessNumber(int businessNumber, vector<Company*> company);	// 사업자 번호에 해당하는 Company 형 포인터 반환
	void addNewApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company);	// 사업자 번호에 해당하는 채용정보에 지원한다
};