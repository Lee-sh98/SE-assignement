#pragma once
#ifndef APPLICATIONSTATISTICS_H
#define APPLICATIONSTATISTICS_H

#include <vector>
#include "ApplicationStatisticsUI.h"
#include "Applicant.h"
#include "Application.h"

class ApplicationStatistics {
private:
	ApplicationStatisticsUI* applicationStatisticsUI;// ApplicationStatistics�� ����ϴ� ApplicationStatisticsUI ��ü

public:
	ApplicationStatistics();// ApplicationStatistics control ������
	vector<Application>* showApplicationStatistics(Applicant* currentUser); // ApplicationList�� �ޱ����� �Լ�
	ApplicationStatisticsUI* getApplicationStatisticsUI(); // ApplicationStatisticsUI*�� ��ȯ�ϴ� �Լ�
};

#endif
