#include <iostream>
#include <fstream>
#include <string>
#include "WithdrawUI.h"
#include "Withdraw.h"

using namespace std;

WithdrawUI::WithdrawUI() {
}

/*
	�Լ� �̸� : WithdrawUI::setWithdrawController()
	���	  : WithdrawUI�� control�� �ʱ�ȭ ��
	���� ���� : controller -> WithdrawUI�� ����ϴ� Withdraw ��ü
	��ȯ��    : ����
*/
void WithdrawUI::setWithdrawController(Withdraw* controller) {
	this->withdrawController = controller;
}

/*
	�Լ� �̸� : WithdrawUI::startWithdrawInterface()
	���	  : WithdrawUI�� ���� �������̽��� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void WithdrawUI::startWithdrawInterface() {}

/*
	�Լ� �̸� : WithdrawUI::withdraw()
	���	  : Ż���ϰ����ϴ� ȸ���� ID�� user�� ���� �Է¹޾� control�� ������
	���� ���� : id -> Ż���ϰ����ϴ� ������� ID
	��ȯ��    : ����
*/
void WithdrawUI::withdraw(ofstream* ofs, string id) {
	this->withdrawController->deleteUser(id); // control�� �Է¹��� id�� ����
	*ofs << "1.2. ȸ��Ż��\n";
	*ofs << "> " << id<<"\n\n";
}