#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "ApplicationStatistics.h"
#include "ApplicationStatisticsUI.h"

using namespace std;

/*
	�Լ� �̸� : ApplicationStatisticsUI::ApplicationStatisticsUI()
	���	  : ApplicationStatisticsUI�� ������
	���� ���� : ����
	��ȯ��    : ����
*/
ApplicationStatisticsUI::ApplicationStatisticsUI() {}

/*
	�Լ� �̸� : ApplicationStatisticsUI::setApplicationStatisticsController
	���	  : ApplicationStatisticsUI�� control�� �ʱ�ȭ ��
	���� ���� : controller -> ApplicationStatisticsUI�� ����ϴ� ApplicationStatistics ��ü
	��ȯ��    : ����
*/
void ApplicationStatisticsUI::setApplicationStatisticsController(ApplicationStatistics* controller) {
	this->applicationStatisticsController = controller;
}

/*
	�Լ� �̸� : ApplicationStatisticsUI::startApplicationStatisticsInterface()
	���	  : ApplicationStatisticsUI�� ���� �������̽��� ������
	���� ���� : ����
	��ȯ��    : ����
*/
void ApplicationStatisticsUI::startApplicationStatisticsInterface() { }

/*
	�Լ� �̸� : ApplicationStatisticsUI::applicationStatistics
	���	  : ���� ������� User�� ���� ���� ��踦 �������� ���
	���� ���� : ApplicationStatistics control�� �����Ϳ� ���� ������� Applicant�� ������
	��ȯ��    : ����
*/
void ApplicationStatisticsUI::applicationStatistics(ofstream* ofs, ApplicationStatistics* applicationStatistics, Applicant* currentUser) {
	vector<Application>* v;
	v = applicationStatistics->showApplicationStatistics((Applicant*)currentUser);//Application ���Ϳ� ApplicationList�� ����
	*ofs << "5.1. ���� ���� ���" << endl;

	int count = 0; //���� Ƚ���� ī��Ʈ �ϱ����� ����
	int i = 0; // ������ ������ ī��Ʈ �ϱ����� ����

	vector<string> job; // ������ ������ �����ϱ����� vector 

	for (Application cur : (*v)) {
		job.push_back(cur.getRecruitment().getJob()); // ApplicationList�� �����ϴ� ��� Job ������ job ���Ϳ� ����
	}

	sort(job.begin(), job.end()); // ���� ���� ����� ���� ����

	job.erase(unique(job.begin(), job.end()), job.end()); // �ߺ��Ǵ� ���� ����

	for (i; i < job.size(); i++) { // �׸� �� ù��° �������� ������ �������� ������� ���� Ƚ�� ī��Ʈ 
		for (Application cur : (*v)) { 
			if (job[i] == cur.getRecruitment().getJob()) { // ApplicationList���� ���� ���� ���������, �� ī��Ʈ �ؾ��� ��
				count++; // ����Ƚ�� 1 ����
			}
		}
		*ofs << job[i] << " " << count << endl; // �ش� ������ ����Ƚ�� ���
		count = 0; // �ٽ� ī��Ʈ ���� �ʱ�ȭ
	}
	*ofs << endl;
}