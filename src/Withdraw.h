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
	WithdrawUI* withdrawUI;	// Withdraw control과 통신하는 WithdrawUI
	vector<Applicant*>* applicantList;	// system의 지원자 정보를 저장해둔 벡터
	vector<Company*>* companyList; // system의 회사 정보를 저장해둔 벡터
public:
	Withdraw(vector<Company*>* companyList, vector<Applicant*>* applicantList); // Withdraw control 생성자
	string deleteUser(string ID); // 사용자를 탈퇴시킴

	//getter
	WithdrawUI* getWithdrawUI(); // WithdrawUI*를 반환함
};
#endif 