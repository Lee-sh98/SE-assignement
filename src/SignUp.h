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
    SignUpUI* signUpUI; // �ش� control�� ����ϴ� SignUpUI ��ü
    vector<Applicant*>* applicantList; // system�� ������ ������ �����ص� ����
    vector<Company*>* companyList; // system�� ȸ�� ������ �����ص� ����
public:
    SignUp(vector<Company*>* companyList, vector<Applicant*>* applicantList); // SignUp control ������
    string addNewCompany(string companyName, int businessNumber, string ID, string password); // ���ο� ȸ�� ȸ�� ��ü�� ������ �� ����
    string addNewApplicant(string companyName, int registrationNumber, string ID, string password); // ���ο��� ������ ȸ�� ��ü�� ������ �� ����
    
    // getter
    SignUpUI* getSignUpUI(); // SignUpUI*�� ��ȯ��
};
#endif 