#pragma once

#include "Applicant.h"
#include "Company.h"

class Apply;

class ApplyUI {
public:
	ApplyUI();	// ApplyUI �� ������
	void startApplyInterface();	// ApplyUI�� ���� �������̽��� ������
	void apply(ifstream* ifs, ofstream* ofs,Apply* applyControl, User* currentUser, vector<Company*>& company);	// �Ϲ� ������� ������ �޴´�
};