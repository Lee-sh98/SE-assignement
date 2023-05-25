#pragma once
#ifndef CANCELAPPLICATION_H
#define CANCELAPPLICATION_H

#include "CancelApplicationUI.h"
#include "Application.h"
#include "Recruitment.h"
#include <vector>

class CancelApplication {
private:
	CancelApplicationUI* cancelApplicationUI; // CancelApplicationUI�� ����ϴ� CancelApplication ��ü(control)
public:
	CancelApplication(); // CancelApplication�� control�� �����ϴ� ������
	CancelApplicationUI* getCancelApplicationUI(); //CancelApplication control�� attribute�� �ϳ��� cancelApplicationUI* �� ��ȯ�ϴ� getter
	Company* getCompanyByBusinessNumber(int businessNumber, vector<Company*> company); // businessNumber�� ���� �� ��ȣ�� Company�� �˾Ƴ��� �Լ�
	void cancelSelectedApplication(int businessNumber, Applicant* currentUser, vector<Company*>& company); //��ҽ� ����� Recruiment�� ������ volunteerNumber�� ���̴� �Լ� 
};


#endif