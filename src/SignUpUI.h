#pragma once
#ifndef SIGHUPUI_H
#define SIGHUPUI_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class SignUp;

class SignUpUI
{
private:
    SignUp* signUpController; // SignUpUI와 통신하는 SignUp 객체(control)

public:
    SignUpUI();
    void setSignUpController(SignUp* controller); // SignUpUI의 control을 초기화 함
    void startSignUpInterface(); // SignUpUI의 시작 인터페이스를 보여줌
    void createCompany(ifstream* ifs, ofstream* ofs); // 회원가입하려는 회사로부터 정보를 입력을 받고, control로 전달함
    void createApplicant(ifstream* ifs, ofstream* ofs); // 회원가입하려는 지원자로부터 정보를 입력을 받고, control로 전달함
};

#endif