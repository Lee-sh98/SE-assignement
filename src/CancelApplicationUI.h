#pragma once
#ifndef CANCELAPPLICATIONUI_H
#define CANCELAPPLICATIONUI_H

#include <iostream>
#include <fstream>
#include "Applicant.h"
#include "Company.h"

using namespace std;

class CancelApplication;

class CancelApplicationUI {
private:
	CancelApplication* cancelApplicationController; // CancelApplicationUI�� ����ϴ� CancelApplication ��ü (control)

public:
	CancelApplicationUI(); // CancelApplicationUI�� ������
	void setCancelApplicationController(CancelApplication* controller); // CancelApplicationUI�� control�� �ʱ�ȭ
	void startCancelApplicaitonInterface(); // CancelApplicationUI�� ���� �������̽��� ������
	void selectApplication(ifstream& ifs, ofstream& ofs, Applicant* currentUser, vector<Company*>& company); // ������ Application�� ������ ����ϰ� ���� ��Ҹ� �����ϴ� �Լ�
};

#endif