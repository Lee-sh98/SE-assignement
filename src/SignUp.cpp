#include <iostream>
#include <string>
#include "SignUp.h"
#include "SignUpUI.h"

using namespace std;

/*
	함수 이름 : SignUp::SignUp()
	기능	  : SignUp의 control을 생성하는 생성자
	전달 인자 : companyList->Company* 형 벡터 포인터, applicantList->Applicant* 형 벡터포인터
	반환값    : 생성한 SignUp 객체의 주소
*/
SignUp::SignUp(vector<Company*>* companyList, vector<Applicant*>* applicantList) {
	this->signUpUI = new SignUpUI();
	this->companyList = companyList;
	this->applicantList = applicantList;
}

/*
	함수 이름 : SignUp::addNewCompany()
	기능	  : 새로운 회사 회원 객체를 생성한 후 저장
	전달 인자 : companyName->새로운 회사명, businessNumber->사업자번호, ID->회사회원의 ID, password->회사회원의 PW
	반환값    : 신규 가입한 회사회원의 정보를 string으로 반환
*/
string SignUp::addNewCompany(string companyName, int businessNumber, string ID, string password) {
	this->companyList->push_back(new Company(companyName, businessNumber, ID, password)); // 회사회원 객체를 생성한 후 회사 회원을 저장하는 벡터에 저장
	
	return string("> 1")
		.append(" ")
		.append(companyName)
		.append(" ")
		.append(to_string(businessNumber))
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
}

/*
	함수 이름 : SignUp::addNewApplicant()
	기능	  : 새로운 지원자 회원 객체를 생성한 후 저장
	전달 인자 : name->새로운 지원자명, registrationNumber->주민번호, ID->지원자회원의 ID, password->지원자회원의 PW
	반환값    : 신규 가입한 지원자회원의 정보를 string으로 반환
*/
string SignUp::addNewApplicant(string name, int registrationNumber, string ID, string password) {
	this->applicantList->push_back(new Applicant(name, registrationNumber, ID, password)); // 지원자회원 객체를 생성한 후 지원자 회원을 저장하는 벡터에 저장
	return string("> 2")
		.append(" ")
		.append(name)
		.append(" ")
		.append(to_string(registrationNumber))
		.append(" ")
		.append(ID)
		.append(" ")
		.append(password)
		.append("\n")
		.append("\n");
}

//getter
/*
	함수 이름 : SignUp::getSignUpUI()
	기능	  : SignUp control의 attribute중 하나인 signUpUI*를 반환하는 getter
	전달 인자 : 없음
	반환값    : signUpUI -> signUpUI의 포인터
*/
SignUpUI* SignUp::getSignUpUI() { return signUpUI; }