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
    SignUp* signUpController; // SignUpUI�� ����ϴ� SignUp ��ü(control)

public:
    SignUpUI();
    void setSignUpController(SignUp* controller); // SignUpUI�� control�� �ʱ�ȭ ��
    void startSignUpInterface(); // SignUpUI�� ���� �������̽��� ������
    void createCompany(ifstream* ifs, ofstream* ofs); // ȸ�������Ϸ��� ȸ��κ��� ������ �Է��� �ް�, control�� ������
    void createApplicant(ifstream* ifs, ofstream* ofs); // ȸ�������Ϸ��� �����ڷκ��� ������ �Է��� �ް�, control�� ������
};

#endif