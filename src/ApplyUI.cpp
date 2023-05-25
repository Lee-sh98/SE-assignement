#include <iostream>
#include <fstream>
#include "ApplyUI.h"
#include "Apply.h"

ApplyUI::ApplyUI() {}


/*
	함수 이름 : ApplyUI::startApplyInterface()
	기능	  : ApplyUI의 시작 인터페이스를 보여줌
	전달 인자 : 없음
	반환값    : 없음
*/
void ApplyUI::startApplyInterface() {}


/*
	함수 이름 : ApplyUI::apply()
	기능	  : 일반사용자가 채용하기 버튼을 누른다.
	전달 인자 : applyControl->Apply 형 포인터, currentUser->User 형 포인터, company-> Company* 형 벡터 참조
	반환값    : 없음
*/
void ApplyUI::apply(ifstream* ifs, ofstream* ofs,Apply* applyControl, User* currentUser, vector<Company*>& company) {
	int businessNumber;
	*ifs >> businessNumber;	// 지원하려는 채용 정보를 식별한다

	Company* applyingCompany = applyControl->getCompanyByBusinessNumber(businessNumber, company);
	
	string companyName = applyingCompany->getCompanyName();
	string job = applyingCompany->listRecruitments()->listRecruitment()->front().getJob();
	applyControl->addNewApplication(businessNumber, (Applicant*)currentUser, company);	// 해당 채용에 지원한다

	*ofs << "4.2. 채용 지원\n";
	*ofs << companyName << " " << businessNumber << " " << job << endl<<endl;	// 채용 지원이 완료되었음을 출력한다

}