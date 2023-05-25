#include "ShowRecruitmentList.h"
#include <iostream>

using namespace std;

ShowRecruitmentList::ShowRecruitmentList() {
  this->showRecruitmentListUI = new ShowRecruitmentListUI(); // ShowRecruitmentListUI�� �����Ѵ�
}


/*
	�Լ� �̸� : ShowRecruitmentList::getShowRecruitmentListUI()
	���	  : ShowRecruitmentListUI�� �����͸� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : ShowRecruitmentListUI�� ������
*/

ShowRecruitmentListUI* ShowRecruitmentList::getShowRecruitmentListUI() {
  return this->showRecruitmentListUI;
}


/*
	�Լ� �̸� : ShowRecruitmentList::showMyRecruitmentList()
	���	  : �ڽ��� ����� ä�������� �����ش�
	���� ���� : currentUser -> Company�� ������
	��ȯ��    : Recruitment�� ���� ������
*/

vector<Recruitment>* ShowRecruitmentList::showMyRecruitmentList(Company* currentUser) {
	return currentUser->getRecruitmentCollection()->getMyRecruitmentList();
}