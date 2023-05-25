#pragma once
#ifndef RECRUITMENTSTATISTICSUI_H
#define RECRUITMENTSTATISTICSUI_H

#include <iostream>
#include <fstream>
#include <string>
#include"Company.h"

using namespace std;

class RecruitmentStatistics;

class RecruitmentStatisticsUI {
private:
	RecruitmentStatistics* recruitmentStatisticsController; // RecruitmentStatisticsUI�� ����ϴ� RecruitmentStatistics ��ü (control)

public:
	RecruitmentStatisticsUI(); // RecruitmentStatisticsUI�� ������
	void setRecruitmentStatisticsController(RecruitmentStatistics* controller); // RecruitmentStatisticsUI�� control�� �ʱ�ȭ �ϴ� �Լ�
	void startRecruitmentStatisticsInterface(); // RecruitmentStatisticsUI�� ���� �������̽��� �����ִ� �Լ�
	void recruitmentStatistics(ofstream* ofs, RecruitmentStatistics* recruitmentStatistics, User* currentUser); // ���� ������� User�� ä�� ���� ��踦 �������� ����ϴ� �Լ�
};
#endif