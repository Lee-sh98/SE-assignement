#pragma once
#include <string>
#include <vector>
//#include "../domain/User/Company.h"
#include "Company.h"
using namespace std;

class SearchRecruitment;

class SearchRecruitmentUI {
private:
public:
	SearchRecruitmentUI();
	void startSearchRecruitmentInterface();
	void findRecruitment(ifstream* ifs, ofstream* ofs,SearchRecruitment* searchRecruitment, vector<Company*>* company);
};