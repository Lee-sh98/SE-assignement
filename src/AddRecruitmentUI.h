#ifndef ADDRECRUITMENTUI_H
#define ADDRECRUITMENTUI_H
#include <fstream>
#include "RecruitmentCollection.h"
#include "Company.h"
class AddRecruitment;

using namespace std;

class AddRecruitmentUI {
public:
  void startAddRecruitmentInterface(); // AddRecruitmentUI의 시작 인터페이스를 보여준다
  void createNewRecruitment(ifstream* ifs, ofstream* ofs, AddRecruitment* addRecruitment, User* currentUser); // 회사회원이 채용정보를 등록한다
};

#endif