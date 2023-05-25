#ifndef ADDRECRUITMENT_H
#define ADDRECRUITMENT_H
#include <string>
#include <iostream>
#include <vector>
#include "AddRecruitmentUI.h"

using namespace std;

class AddRecruitment {
private:
  AddRecruitmentUI* addRecruitmentUI; // AddRecruitmentUI과 통신하는 AddRecruitment boundary 객체 
public:
  AddRecruitment(); // AddRecruitment 생성자
  AddRecruitmentUI* getAddRecruitmentUI(); // AddRecruitmentUI*를 반환한다
  void addNewRecruitment(string job, int numberOfPeople, string deadline, Company* currentUser); // 회사회원이 채용정보를 등록한다
};

#endif