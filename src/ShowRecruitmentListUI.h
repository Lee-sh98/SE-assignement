#ifndef SHOWRECRUITMENTLISTUI_H
#define SHOWRECRUITMENTLISTUI_H
#include <fstream>
#include "Company.h"

using namespace std;

class ShowRecruitmentList;

class ShowRecruitmentListUI {
public:
  void startShowRecruitmentListInterface(); // ShowRecruitmentListUI의 시작 인터페이스를 보여준다
  void showMyRecruitmentList(ofstream* ofs, ShowRecruitmentList* showRecruitmentList, User* currentUser); // 자신이 등록한 채용정보를 보여준다
};

#endif