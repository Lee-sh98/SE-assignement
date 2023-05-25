#include <iostream>
#include <string>
#include "ApplicationStatistics.h"
#include "ApplicationStatisticsUI.h"

using namespace std;
/*
	�Լ� �̸�: ApplicationStatistics::ApplicationStatistics()
	���: ApplicationStatistics�� Control�� �����ϴ� ������
	���� ����: ����
	��ȯ��: ������ ApplicationStatistics�� ��ü �ּ�
*/
ApplicationStatistics::ApplicationStatistics() {
	this->applicationStatisticsUI = new ApplicationStatisticsUI();
}


/*
	�Լ� �̸�: ApplicationStatistics::showApplicationStatistics()
	���: Applicant���� ������ ApplicationList�� ã�Ƴ�
	���� ����: currentUser -> ã������ Appication�� �������ִ� Applicant�� ������
	��ȯ��: Application�� ���� ������
*/
vector<Application>* ApplicationStatistics::showApplicationStatistics(Applicant* currentUser) {
	return currentUser->listApplications()->listApplication();
}

/*
	�Լ� �̸� : ApplicationStatistics::getApplicationStatisticsUI()
	���	  : ApplicationStatistics control�� attribute�� �ϳ��� ApplicationStatisticsUI*�� ��ȯ�ϴ� getter
	���� ���� : ����
	��ȯ��    : applicationStatisticsUI -> ApplicationStatisticsUI�� ������
*/
ApplicationStatisticsUI* ApplicationStatistics::getApplicationStatisticsUI() { return this->applicationStatisticsUI; }