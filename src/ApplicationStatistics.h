#pragma once
#ifndef APPLICATIONSTATISTICS_H
#define APPLICATIONSTATISTICS_H

#include <vector>
#include "ApplicationStatisticsUI.h"
#include "Applicant.h"
#include "Application.h"

class ApplicationStatistics {
private:
	ApplicationStatisticsUI* applicationStatisticsUI;// ApplicationStatistics과 통신하는 ApplicationStatisticsUI 객체

public:
	ApplicationStatistics();// ApplicationStatistics control 생성자
	vector<Application>* showApplicationStatistics(Applicant* currentUser); // ApplicationList를 받기위한 함수
	ApplicationStatisticsUI* getApplicationStatisticsUI(); // ApplicationStatisticsUI*를 반환하는 함수
};

#endif
