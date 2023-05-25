#include "ShowRecruitmentList.h"
#include "ShowRecruitmentListUI.h"
#include "Company.h"
#include <vector>
#include <iostream>

using namespace std;

/*
	함수 이름 : ShowRecruitmentListUI::startShowRecruitmentListInterface()
	기능	  : ShowRecruitmentListUI의 시작 인터페이스를 보여준다
	전달 인자 : 없음
	반환값    : 없음
*/

void ShowRecruitmentListUI::startShowRecruitmentListInterface() {}


/*
	함수 이름 : ShowRecruitmentListUI::showMyRecruitmentList()
	기능	  : 자신이 등록한 채용정보를 보여준다
	전달 인자 : showRecruitmentList -> ShowRecruitmentList형 포인터, currentUser -> User형 포인터
	반환값    : 없음
*/

void ShowRecruitmentListUI::showMyRecruitmentList(ofstream* ofs, ShowRecruitmentList* showRecruitmentList, User* currentUser) {
	vector<Recruitment>* v;
	v = showRecruitmentList->showMyRecruitmentList((Company*)currentUser);
	*ofs << "3.2 등록된 채용정보 조회" << endl;
	for (Recruitment cur : (*v)) {
		*ofs << cur.getJob() << " " << cur.getNumberOfPeople() << " " << cur.getDeadline() << endl;
	}
	*ofs << endl;
}