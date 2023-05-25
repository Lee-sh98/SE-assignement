#include <fstream>
#include <iostream>
#include "InquireApplicationUI.h"
#include "InquireApplication.h"

using namespace std;

/*
	�Լ� �̸� : InquireApplicationUI::InquireApplicationUI()
	���	  : InquireApplication���� �����ϴ� ������
	���� ���� : companyList->Company* �� ���� ������, applicantList->Applicant* �� ����������
	��ȯ��    : ������ SignUp ��ü�� �ּ�
*/
InquireApplicationUI::InquireApplicationUI() {
}


/*
	�Լ� �̸� : InquireApplicationUI::startInquireApplicationUI()
	���	  : InquireApplicationUI�� ���� �������̽��� �����ش�
	���� ���� : ����
	��ȯ��    : ����
*/
void InquireApplicationUI::startInquireApplicationUI() {}


/*
	�Լ� �̸� : InquireApplicationUI::displayApplications()
	���	  : �ڽ��� ������ ������ �����ش�
	���� ���� : inquireApplication->InquireApplication �� ������, currentUser->User �� ������
	��ȯ��    : ����
*/
void InquireApplicationUI::displayApplications(ofstream* ofs, InquireApplication* inquireApplication, User* currentUser) {

	ApplicationCollection* ac = inquireApplication->showApplication((Applicant*)currentUser);	// �ڽ��� ������ ApplicationCollection�� �޾ƿ´�
	*ofs << "4.3. ���� ���� ��ȸ\n";

	for (Application cur: *ac->listApplication()) {
		string companyName = cur.getCompanyName();
		int businessNumber = cur.getBusinessNumber();
		
		Recruitment appliedRecruitment = cur.getRecruitment();
		
		string job = appliedRecruitment.getJob();
		int numberOfPeople = appliedRecruitment.getNumberOfPeople();
		string deadline = appliedRecruitment.getDeadline();

		*ofs << companyName << " " << businessNumber << " " << job << " " << numberOfPeople << " " << deadline << endl;	// ���� ���� ���
	}
	*ofs << endl;
}