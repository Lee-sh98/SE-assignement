#include "AddRecruitment.h"


AddRecruitment::AddRecruitment() {
  this->addRecruitmentUI = new AddRecruitmentUI(); // AddRecruitmentUI ����
}

/*
	�Լ� �̸� : AddRecruitmentUI::getAddRecruitmentUI()
	���	  : AddRecruitmentUI�� �����͸� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : AddRecruitmentUI�� ������
*/

AddRecruitmentUI* AddRecruitment::getAddRecruitmentUI() {
  return this->addRecruitmentUI;
}

/*
	�Լ� �̸� : AddRecruitmentUI::addNewRecruitment()
	���	  : ȸ��ȸ���� ä�������� ����Ѵ�
	���� ���� : job -> string, numberOfPeople -> int, deadline -> string, currentUser -> Company�� ������
	��ȯ��    : ����
*/

void AddRecruitment::addNewRecruitment(string job, int numberOfPeople, string deadline, Company* currentUser) {
	currentUser->getRecruitmentCollection()->addNewRecruitment(job, numberOfPeople, deadline);
}