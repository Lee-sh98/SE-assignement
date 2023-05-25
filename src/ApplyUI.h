#pragma once

#include "Applicant.h"
#include "Company.h"

class Apply;

class ApplyUI {
public:
	ApplyUI();	// ApplyUI 형 생성자
	void startApplyInterface();	// ApplyUI의 시작 인터페이스를 보여줌
	void apply(ifstream* ifs, ofstream* ofs,Apply* applyControl, User* currentUser, vector<Company*>& company);	// 일반 사용자의 지원을 받는다
};