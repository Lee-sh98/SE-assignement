#pragma once
#include <string>
#include <vector>
#include "Company.h"
using namespace std;

class SearchRecruitment;

class SearchRecruitmentUI {
private:
public:
	SearchRecruitmentUI();	// SearchRecruitmentUI 생성자
	void startSearchRecruitmentInterface();	// SearchRecruitment의 시작 인터페이스를 보여줌
	void findRecruitment(ifstream* ifs, ofstream* ofs,SearchRecruitment* searchRecruitment, vector<Company*>* company);	// 사용자의 검색에 따른 회사의 채용정보를 보여준다
};