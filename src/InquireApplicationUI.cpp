#include <fstream>
#include <iostream>
#include "InquireApplicationUI.h"
#include "InquireApplication.h"

using namespace std;

/*
	함수 이름 : InquireApplicationUI::InquireApplicationUI()
	기능	  : InquireApplication의을 생성하는 생성자
	전달 인자 : companyList->Company* 형 벡터 포인터, applicantList->Applicant* 형 벡터포인터
	반환값    : 생성한 SignUp 객체의 주소
*/
InquireApplicationUI::InquireApplicationUI() {
}


/*
	함수 이름 : InquireApplicationUI::startInquireApplicationUI()
	기능	  : InquireApplicationUI의 시작 인터페이스를 보여준다
	전달 인자 : 없음
	반환값    : 없음
*/
void InquireApplicationUI::startInquireApplicationUI() {}


/*
	함수 이름 : InquireApplicationUI::displayApplications()
	기능	  : 자신이 지원한 정보를 보여준다
	전달 인자 : inquireApplication->InquireApplication 형 포인터, currentUser->User 형 포인터
	반환값    : 없음
*/
void InquireApplicationUI::displayApplications(ofstream* ofs, InquireApplication* inquireApplication, User* currentUser) {

	ApplicationCollection* ac = inquireApplication->showApplication((Applicant*)currentUser);	// 자신이 지원한 ApplicationCollection을 받아온다
	*ofs << "4.3. 지원 정보 조회\n";

	for (Application cur: *ac->listApplication()) {
		string companyName = cur.getCompanyName();
		int businessNumber = cur.getBusinessNumber();
		
		Recruitment appliedRecruitment = cur.getRecruitment();
		
		string job = appliedRecruitment.getJob();
		int numberOfPeople = appliedRecruitment.getNumberOfPeople();
		string deadline = appliedRecruitment.getDeadline();

		*ofs << companyName << " " << businessNumber << " " << job << " " << numberOfPeople << " " << deadline << endl;	// 지원 정보 출력
	}
	*ofs << endl;
}