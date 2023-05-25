#pragma once
#ifndef APPLICATIONSTATISTICSUI_H
#define APPLICATIONSTATISTICSUI_H

#include <iostream>
#include <fstream>
#include <string>
#include"Applicant.h"

using namespace std;

class ApplicationStatistics;

class ApplicationStatisticsUI {
private:
	ApplicationStatistics* applicationStatisticsController; // ApplicationStatisticsUI�� ����ϴ� ApplicationStatistics control��ü

public:
	ApplicationStatisticsUI(); // ApplicationStatisticsUI�� ������
	void setApplicationStatisticsController(ApplicationStatistics* controller);  // ApplicationStatisticsUI�� control�� �ʱ�ȭ ��
	void startApplicationStatisticsInterface(); // ApplicationStatisticsUI�� ���� �������̽��� ������
	void applicationStatistics(ofstream* ofs, ApplicationStatistics* applicationStatistics, Applicant* currentUser); // ���� ������� User�� ���� ���� ��踦 �������� ���

};

#endif