#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "RecruitmentStatistics.h"
#include "RecruitmentStatisticsUI.h"

using namespace std;

/*
	�Լ� �̸� : RecruitmentStatisticsUI::RecruitmentStatisticsUI()
	���	  : RecruitmentStatisticsUI�� ������
	���� ���� : ����
	��ȯ��    : ����
*/
RecruitmentStatisticsUI::RecruitmentStatisticsUI() {}

/*
	�Լ� �̸� : RecruitmentStatisticsUI::setRecruitmentStatisticsController()
	���	  : RecruitmentStatisticsUI�� control�� �ʱ�ȭ ��
	���� ���� : controller -> RecruitmentStatisticsUI�� ����ϴ� RecruitmentStatistics ��ü
	��ȯ��    : ����
*/
void RecruitmentStatisticsUI::setRecruitmentStatisticsController(RecruitmentStatistics* controller){
	this->recruitmentStatisticsController = controller;
}

/*
	�Լ� �̸� : RecruitmentStatisticsUI::startRecruitmentStatisticsInterface()
	���	  : RecruitmentStatisticsUI�� ���� �������̽��� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void RecruitmentStatisticsUI::startRecruitmentStatisticsInterface() {

}

/*
	�Լ� �̸� : RecruitmentStatisticsUI::recruitmentStatistics()
	���	  : ���� ������� User�� ä�� ���� ��踦 �������� ���
	���� ���� : RecruitmentStatistics control�� �����Ϳ� ���� ������� User�� ������
	��ȯ��    : ����
*/
void RecruitmentStatisticsUI::recruitmentStatistics(ofstream* ofs, RecruitmentStatistics* recruitmentStatistics,  User* currentUser) {
	vector<Recruitment>* v;
	v = recruitmentStatistics->showRecruitmentStatistics((Company*) currentUser); // Recruitment�� ���Ϳ� RecruitmentList�� ����
	*ofs << "5.1. ä�� ���� ���" << endl;
	
	int count = 0; //���� Ƚ���� ī��Ʈ �ϱ����� ����
	int i = 0; // ������ ������ ī��Ʈ �ϱ����� ����

	vector<string> job; // ������ ������ �����ϱ����� vector 

	for (Recruitment cur : (*v)) {
		job.push_back(cur.getJob()); // RecruitmentList�� �����ϴ� ��� Job ������ job ���Ϳ� ����
	}

	sort(job.begin(), job.end()); // ���� ���� ����� ���� ����
	
	job.erase(unique(job.begin(), job.end()),job.end()); // �ߺ��Ǵ� ���� ����

	for (i; i < job.size(); i++) { // �׸� �� ù��° �������� ������ �������� ������� ���� Ƚ�� ī��Ʈ 
		for (Recruitment cur : (*v)) {
			if (job[i] == cur.getJob()) {  // RecruitmentList���� ���� ���� ���������, �� ī��Ʈ �ؾ��� ��
				count = count + cur.getVolunteerNumber(); // ������ �� ��ŭ count ����
			}
		}
		*ofs << job[i] << " " << count << endl; // �ش� ������ ������ �� ���
		count = 0; //���� ������ ī��Ʈ �ϱ����� �ʱ�ȭ
	}
	*ofs << endl;
	
}