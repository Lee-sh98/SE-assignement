#pragma once
#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "WithdrawUI.h"

using namespace std;

class Withdraw
{
private:
	WithdrawUI* withdrawUI;	// Withdraw control�� ����ϴ� WithdrawUI
	vector<Applicant*>* applicantList;	// system�� ������ ������ �����ص� ����
	vector<Company*>* companyList; // system�� ȸ�� ������ �����ص� ����
public:
	Withdraw(vector<Company*>* companyList, vector<Applicant*>* applicantList); // Withdraw control ������
	string deleteUser(string ID); // ����ڸ� Ż���Ŵ

	//getter
	WithdrawUI* getWithdrawUI(); // WithdrawUI*�� ��ȯ��
};
#endif 