#pragma once

#include "Applicant.h"

using namespace std;

class InquireApplication;

class InquireApplicationUI {
public:
	InquireApplicationUI();	// InquireApplicationUI 클래스 생성자
	void startInquireApplicationUI();	// InquireApplicationUI의 시작 인터페이스를 보여준다
	void displayApplications(ofstream* ofs,InquireApplication* inquireApplication, User* currentUser);	// 자신이 지원한 정보를 보여준다
};