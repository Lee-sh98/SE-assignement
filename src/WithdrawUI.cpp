#include <iostream>
#include <fstream>
#include <string>
#include "WithdrawUI.h"
#include "Withdraw.h"

using namespace std;

WithdrawUI::WithdrawUI() {
}

void WithdrawUI::setWithdrawController(Withdraw* controller) {
	this->withdrawController = controller;
}

void WithdrawUI::startWithdrawInterface() {}

void WithdrawUI::withdraw(ofstream* ofs, string id) {
	this->withdrawController->deleteUser(id);
	*ofs << "1.2. ȸ��Ż��\n";
	*ofs << "> " << id<<"\n\n";
}

// boundary���� ���� �Է�, ��� ��� ����