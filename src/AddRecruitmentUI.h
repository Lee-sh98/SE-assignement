#ifndef ADDRECRUITMENTUI_H
#define ADDRECRUITMENTUI_H
#include <fstream>
#include "RecruitmentCollection.h"
#include "Company.h"
class AddRecruitment;

using namespace std;

class AddRecruitmentUI {
public:
  void startAddRecruitmentInterface();
  void createNewRecruitment(ifstream* ifs, ofstream* ofs, AddRecruitment* addRecruitment, User* currentUser);
};

#endif