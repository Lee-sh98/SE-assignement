#include <iostream>
#include <fstream>
#include <string>
#include "SignUpUI.h"
#include "SignUp.h"

using namespace std;

SignUpUI::SignUpUI() {
}

/*
	함수 이름 : SignUpUI::setSignUpController()
	기능	  : SignUpUI의 control을 초기화 함
	전달 인자 : controller -> SignUpUI와 통신하는 SignUp 객체
	반환값    : 없음
*/
void SignUpUI::setSignUpController(SignUp* controller) {
	this->signUpController = controller;
}

/*
	함수 이름 : SignUpUI::startSignUpInterface()
	기능	  : SignUpUI의 시작 인터페이스를 보여줌
	전달 인자 : 없음
	반환값    : 없음
*/
void SignUpUI::startSignUpInterface() {}

/*
	함수 이름 : SignUpUI::createCompany()
	기능	  : 회원가입하려는 회사로부터 정보를 입력을 받고, control로 전달함
	전달 인자 : 없음
	반환값    : 없음
*/
void SignUpUI::createCompany(ifstream* ifs, ofstream* ofs) {
	string companyName, companyID, companyPW;
	int businessNumber;
	
	*ifs >> companyName >> businessNumber >> companyID >> companyPW; // 회사의 정보를 입력받음
	*ofs << "1.1.회원가입\n";
	*ofs << this->signUpController->addNewCompany(companyName, businessNumber, companyID, companyPW); // 정보를 control로 전달
}

/*
	함수 이름 : SignUpUI::createApplicant()
	기능	  : 회원가입하려는 지원자로부터 정보를 입력을 받고, control로 전달함
	전달 인자 : 없음
	반환값    : 없음
*/
void SignUpUI::createApplicant(ifstream* ifs, ofstream* ofs) {
	string name, ID, PW;
	int registrationNumber;
	*ifs >> name >> registrationNumber >> ID >> PW; // 지원자의 정보를 입력받음
	*ofs << "1.1.회원가입\n";
	*ofs << this->signUpController->addNewApplicant(name, registrationNumber, ID, PW); // 정보를 control로 전달
}