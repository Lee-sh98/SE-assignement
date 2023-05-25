#ifndef ADDRECRUITMENT_H
#define ADDRECRUITMENT_H
#include <string>
#include <iostream>
#include <vector>
#include "AddRecruitmentUI.h"

using namespace std;

class AddRecruitment {
private:
  AddRecruitmentUI* addRecruitmentUI;
public:
  AddRecruitment();
  AddRecruitmentUI* getAddRecruitmentUI();
  void addNewRecruitment(string job, int numberOfPeople, string deadline, Company* currentUser);
};

#endif