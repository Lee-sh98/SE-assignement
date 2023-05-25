#pragma once
#include <string>
#include <vector>
#include "Company.h"
using namespace std;

class SearchRecruitment;

class SearchRecruitmentUI {
private:
public:
	SearchRecruitmentUI();	// SearchRecruitmentUI ������
	void startSearchRecruitmentInterface();	// SearchRecruitment�� ���� �������̽��� ������
	void findRecruitment(ifstream* ifs, ofstream* ofs,SearchRecruitment* searchRecruitment, vector<Company*>* company);	// ������� �˻��� ���� ȸ���� ä�������� �����ش�
};