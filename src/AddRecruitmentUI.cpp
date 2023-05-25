#include "AddRecruitment.h"
#include <vector>


/*
	함수 이름 : AddRecruitmentUI::startAddRecruitmentInterface()
	기능	  : AddRecruitmentUI의 시작 인터페이스를 보여준다
	전달 인자 : 없음
	반환값    : 없음
*/

void AddRecruitmentUI::startAddRecruitmentInterface() {}


/*
	함수 이름 : AddRecruitmentUI::createNewRecruitment()
	기능	  : 회사회원이 채용정보를 등록한다
	전달 인자 : addRecruitment -> AddRecruitment형 포인터, currentUser -> User형 포인터
	반환값    : 없음
*/

void AddRecruitmentUI::createNewRecruitment(ifstream* ifs, ofstream* ofs, AddRecruitment* addRecruitment, User* currentUser) {
	string job, deadline;
	int numberOfPeople;
	*ifs >> job >> numberOfPeople >> deadline;
	addRecruitment->addNewRecruitment(job, numberOfPeople, deadline, (Company*)currentUser);
	*ofs << "3.1 채용정보 등록" << endl << job << " " << numberOfPeople << " " << deadline << endl << endl;
}