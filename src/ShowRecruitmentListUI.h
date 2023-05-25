#ifndef SHOWRECRUITMENTLISTUI_H
#define SHOWRECRUITMENTLISTUI_H
#include <fstream>
#include "Company.h"

using namespace std;

class ShowRecruitmentList;

class ShowRecruitmentListUI {
public:
  void startShowRecruitmentListInterface();
  void showMyRecruitmentList(ofstream* ofs, ShowRecruitmentList* showRecruitmentList, User* currentUser);
};

#endif