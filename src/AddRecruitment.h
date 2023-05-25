#ifndef ADDRECRUITMENT_H
#define ADDRECRUITMENT_H
#include <string>
#include <iostream>
#include <vector>
#include "AddRecruitmentUI.h"

using namespace std;

class AddRecruitment {
private:
  AddRecruitmentUI* addRecruitmentUI; // AddRecruitmentUI�� ����ϴ� AddRecruitment boundary ��ü 
public:
  AddRecruitment(); // AddRecruitment ������
  AddRecruitmentUI* getAddRecruitmentUI(); // AddRecruitmentUI*�� ��ȯ�Ѵ�
  void addNewRecruitment(string job, int numberOfPeople, string deadline, Company* currentUser); // ȸ��ȸ���� ä�������� ����Ѵ�
};

#endif