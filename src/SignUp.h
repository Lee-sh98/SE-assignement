#pragma once
#ifndef SIGHUP_H
#define SIGHUP_H

#include <iostream>
#include <string>
#include "User.h"
#include "Company.h"
#include "Applicant.h"
#include "SignUpUI.h"

using namespace std;


class SignUp
{
private:
    SignUpUI* signUpUI; // 해당 control과 통신하는 SignUpUI 객체
    vector<Applicant*>* applicantList; // system의 지원자 정보를 저장해둔 벡터
    vector<Company*>* companyList; // system의 회사 정보를 저장해둔 벡터
public:
    SignUp(vector<Company*>* companyList, vector<Applicant*>* applicantList); // SignUp control 생성자
    string addNewCompany(string companyName, int businessNumber, string ID, string password); // 새로운 회사 회원 객체를 생성한 후 저장
    string addNewApplicant(string companyName, int registrationNumber, string ID, string password); // 새로운지 지원자 회원 객체를 생성한 후 저장
    
    // getter
    SignUpUI* getSignUpUI(); // SignUpUI*를 반환함
};
#endif 