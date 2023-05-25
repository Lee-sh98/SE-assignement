#pragma once

#include <vector>
#include "Applicant.h"
#include "Company.h"
#include "ApplyUI.h"

class Apply {
private:
	ApplyUI* applyUI;	// Apply�� ����ϴ� ApplyUI ��ü 
public:
	Apply();	// ApplyŬ���� ������
	ApplyUI* getApplyUI();	// applyUI*�� ��ȯ�Ѵ�
	Company* getCompanyByBusinessNumber(int businessNumber, vector<Company*> company);	// ����� ��ȣ�� �ش��ϴ� Company �� ������ ��ȯ
	void addNewApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company);	// ����� ��ȣ�� �ش��ϴ� ä�������� �����Ѵ�
};