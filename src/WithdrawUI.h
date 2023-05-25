#pragma once
#ifndef WITHDRAWUI_H
#define WITHDRAWUI_H
#include <iostream>
#include <string>

using namespace std;

class Withdraw;

class WithdrawUI
{
private:
	Withdraw* withdrawController; // WithdrawUI와 통신하는 Withdraw 객체(control)
public:
	WithdrawUI();
	void setWithdrawController(Withdraw* controller); // WithdrawUI의 control을 초기화 함
	void startWithdrawInterface(); // WithdrawUI의 시작 인터페이스를 보여줌
	void withdraw(ofstream* ofs, string ID); // 탈퇴하고자하는 회원의 ID를 user로 부터 입력받아 control로 전달함
};

#endif