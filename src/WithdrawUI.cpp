#include <iostream>
#include <fstream>
#include <string>
#include "WithdrawUI.h"
#include "Withdraw.h"

using namespace std;

WithdrawUI::WithdrawUI() {
}

/*
	함수 이름 : WithdrawUI::setWithdrawController()
	기능	  : WithdrawUI의 control을 초기화 함
	전달 인자 : controller -> WithdrawUI와 통신하는 Withdraw 객체
	반환값    : 없음
*/
void WithdrawUI::setWithdrawController(Withdraw* controller) {
	this->withdrawController = controller;
}

/*
	함수 이름 : WithdrawUI::startWithdrawInterface()
	기능	  : WithdrawUI의 시작 인터페이스를 보여줌
	전달 인자 : 없음
	반환값    : 없음
*/
void WithdrawUI::startWithdrawInterface() {}

/*
	함수 이름 : WithdrawUI::withdraw()
	기능	  : 탈퇴하고자하는 회원의 ID를 user로 부터 입력받아 control로 전달함
	전달 인자 : id -> 탈퇴하고자하는 사용자의 ID
	반환값    : 없음
*/
void WithdrawUI::withdraw(ofstream* ofs, string id) {
	this->withdrawController->deleteUser(id); // control로 입력받은 id를 전달
	*ofs << "1.2. 회원탈퇴\n";
	*ofs << "> " << id<<"\n\n";
}