#include <string>
#include <iostream>
#include <fstream>
#include "SearchRecruitmentUI.h"
#include "SearchRecruitment.h"

using namespace std;

SearchRecruitmentUI::SearchRecruitmentUI(){}

/*
	�Լ� �̸� : SearchRecruitmentUI::startSearchRecruitmentInterface()
	���	  : SearchRecruitmentUI�� ���� �������̽��� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void SearchRecruitmentUI::startSearchRecruitmentInterface() {}



/*
	�Լ� �̸� : SearchRecruitmentUI::findRecruitment()
	���	  : �Ϲ� ȸ���� ä�� ������ ȸ���̸����� �˻��ϸ�, �ش� �̸��� ȸ���� ä����������Ʈ�� ����Ѵ�.
	���� ���� : searchRecruitment->SearchRecruitment �� ������, company->Company* �� ���� ������
	��ȯ��    : ����
*/
void SearchRecruitmentUI:: findRecruitment(ifstream* ifs, ofstream* ofs,SearchRecruitment* searchRecruitment, vector<Company*>* company) {
	string companyName;
	
	(*ifs) >> companyName;	// ȸ�� �̸��� �Է¹޴´�.
	
	RecruitmentCollection* recruitmentCollection = searchRecruitment->showRecruitmentList(companyName, company);	// �Է��� �̸��� �ش��ϴ� ȸ���� ä�� ���� Collection �����͸� �޴´�

	vector<Recruitment>* recVec = recruitmentCollection->getMyRecruitmentList();	// ä�� ������ ��ȸ�� ä�� ���� ���͸� �����´�
	
	(*ofs) << "4.1.  ä�� ���� �˻�\n";
	for (Recruitment cur: (*recVec)) {
		int businessNumber = searchRecruitment->getBusinessNumber(companyName, company);
		string job = cur.getJob();
		int numberOfPeople = cur.getNumberOfPeople();
		string deadline = cur.getDeadline();

		(*ofs) << companyName << " " << businessNumber << " " << job<<" "<<numberOfPeople<<" "<<deadline<<endl;	// ä�� ���� ���
	}
	(*ofs) << endl;
}