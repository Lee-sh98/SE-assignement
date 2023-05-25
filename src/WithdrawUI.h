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
	Withdraw* withdrawController; // WithdrawUI�� ����ϴ� Withdraw ��ü(control)
public:
	WithdrawUI();
	void setWithdrawController(Withdraw* controller); // WithdrawUI�� control�� �ʱ�ȭ ��
	void startWithdrawInterface(); // WithdrawUI�� ���� �������̽��� ������
	void withdraw(ofstream* ofs, string ID); // Ż���ϰ����ϴ� ȸ���� ID�� user�� ���� �Է¹޾� control�� ������
};

#endif