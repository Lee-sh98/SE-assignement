#include <string>
#include <iostream>
#include <fstream>
#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"

using namespace std;

SearchRecruitmentUI::SearchRecruitmentUI(){

}

void SearchRecruitmentUI::startSearchRecruitmentInterface() {


}


void SearchRecruitmentUI:: findRecruitment(ifstream* ifs, ofstream* ofs,SearchRecruitment* searchRecruitment, vector<Company*>* company) {
	string companyName;
	
	(*ifs) >> companyName;
	
	RecruitmentCollection* recruitmentCollection = searchRecruitment->showRecruitmentList(companyName, company);

	vector<Recruitment>* recVec = recruitmentCollection->getMyRecruitmentList();
	
	(*ofs) << "4.1.  채용 정보 검색\n";
	for (Recruitment cur: (*recVec)) {
		int businessNumber = searchRecruitment->getBusinessNumber(companyName, company);
		string job = cur.getJob();
		int numberOfPeople = cur.getNumberOfPeople();
		string deadline = cur.getDeadline();

		(*ofs) << companyName << " " << businessNumber << " " << job<<" "<<numberOfPeople<<" "<<deadline<<endl;
	}
	(*ofs) << endl;
}