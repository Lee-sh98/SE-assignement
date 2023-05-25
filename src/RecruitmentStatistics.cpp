#include <iostream>
#include <string>
#include "RecruitmentStatistics.h"
#include "RecruitmentStatisticsUI.h"

using namespace std;

/*
	�Լ� �̸�: RecruitmentStatistics::RecruitmentStatistics()
	���: RecruitmentStatistics�� Control�� �����ϴ� ������
	���� ����: ����
	��ȯ��: ������ RecruitmentStatistics�� ��ü �ּ�
*/
RecruitmentStatistics::RecruitmentStatistics() {
	this->recruitmentStatisticsUI = new RecruitmentStatisticsUI();
}

/*
	�Լ� �̸�: RecruitmentStatistics::showRecruitmentStatistics()
	���: Company���� ������ RecruitmentList�� ã�Ƴ�
	���� ����: currentUser -> ã������ Recruitment�� �������ִ� Company�� ������
	��ȯ��: Recruitment�� ���� ������
*/
vector<Recruitment>* RecruitmentStatistics::showRecruitmentStatistics(Company* currentUser) {
	return currentUser->listRecruitments()->getMyRecruitmentList();
}

/*
	�Լ� �̸� : RecruitmentStatistics::getRecruitmentStatisticsUI()
	���	  : RecruitmentStatistics control�� attribute�� �ϳ��� RecruitmentStatisticsUI*�� ��ȯ�ϴ� getter
	���� ���� : ����
	��ȯ��    : recruitmentStatisticsUI -> RecruitmentStatisticsUI�� ������
*/
RecruitmentStatisticsUI* RecruitmentStatistics::getRecruitmentStatisticsUI() { return this->recruitmentStatisticsUI; }