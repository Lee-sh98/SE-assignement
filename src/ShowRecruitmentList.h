#ifndef SHOWRECRUITMENTLIST_H
#define SHOWRECRUITMENTLIST_H
#include "ShowRecruitmentListUI.h"
#include <vector>


class ShowRecruitmentList {
private:
  ShowRecruitmentListUI* showRecruitmentListUI; // ShowRecruitmentListUI�� ����ϴ� ShowRecruitmentList boundary ��ü 
public:
  ShowRecruitmentList(); // ShowRecruitmentList ������
  ShowRecruitmentListUI* getShowRecruitmentListUI(); // ShowRecruitmentListUI�� �����͸� ��ȯ�Ѵ�
  vector<Recruitment>* showMyRecruitmentList(Company* currentUser); // �ڽ��� ����� ä�������� �����ش�
};

#endif