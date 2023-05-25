#include <string>
#include <iostream>
#include <fstream>
#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"

using namespace std;

SearchRecruitmentUI::SearchRecruitmentUI(){}

/*
	함수 이름 : SearchRecruitmentUI::startSearchRecruitmentInterface()
	기능	  : SearchRecruitmentUI의 시작 인터페이스를 보여줌
	전달 인자 : 없음
	반환값    : 없음
*/
void SearchRecruitmentUI::startSearchRecruitmentInterface() {}



/*
	함수 이름 : SearchRecruitmentUI::findRecruitment()
	기능	  : 일반 회원이 채용 정보를 회사이름으로 검색하면, 해당 이름의 회사의 채용정보리스트를 출력한다.
	전달 인자 : searchRecruitment->SearchRecruitment 형 포인터, company->Company* 형 벡터 포인터
	반환값    : 없음
*/
void SearchRecruitmentUI:: findRecruitment(ifstream* ifs, ofstream* ofs,SearchRecruitment* searchRecruitment, vector<Company*>* company) {
	string companyName;
	
	(*ifs) >> companyName;	// 회사 이름을 입력받는다.
	
	RecruitmentCollection* recruitmentCollection = searchRecruitment->showRecruitmentList(companyName, company);	// 입력한 이름에 해당하는 회사의 채용 정보 Collection 포인터를 받는다

	vector<Recruitment>* recVec = recruitmentCollection->getMyRecruitmentList();	// 채용 정보를 조회해 채용 정보 벡터를 가져온다
	
	(*ofs) << "4.1.  채용 정보 검색\n";
	for (Recruitment cur: (*recVec)) {
		int businessNumber = searchRecruitment->getBusinessNumber(companyName, company);
		string job = cur.getJob();
		int numberOfPeople = cur.getNumberOfPeople();
		string deadline = cur.getDeadline();

		(*ofs) << companyName << " " << businessNumber << " " << job<<" "<<numberOfPeople<<" "<<deadline<<endl;	// 채용 정보 출력
	}
	(*ofs) << endl;
}