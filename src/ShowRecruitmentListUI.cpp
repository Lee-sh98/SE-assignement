#include "ShowRecruitmentList.h"
#include "ShowRecruitmentListUI.h"
#include "Company.h"
#include <vector>
#include <iostream>

using namespace std;

void ShowRecruitmentListUI::startShowRecruitmentListInterface() {}

void ShowRecruitmentListUI::showMyRecruitmentList(ofstream* ofs, ShowRecruitmentList* showRecruitmentList, User* currentUser) {
	vector<Recruitment>* v;
	v = showRecruitmentList->showMyRecruitmentList((Company*)currentUser);
	*ofs << "3.2 등록된 채용정보 조회" << endl;
	for (Recruitment cur : (*v)) {
		*ofs << cur.getJob() << " " << cur.getNumberOfPeople() << " " << cur.getDeadline() << endl;
	}
	*ofs << endl;
}