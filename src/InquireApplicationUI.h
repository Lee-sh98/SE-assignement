#pragma once

#include "Applicant.h"

using namespace std;

class InquireApplication;

class InquireApplicationUI {
public:
	InquireApplicationUI();	// InquireApplicationUI Ŭ���� ������
	void startInquireApplicationUI();	// InquireApplicationUI�� ���� �������̽��� �����ش�
	void displayApplications(ofstream* ofs,InquireApplication* inquireApplication, User* currentUser);	// �ڽ��� ������ ������ �����ش�
};