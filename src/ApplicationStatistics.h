#pragma once
#ifndef APPLICATIONSTATISTICS_H
#define APPLICATIONSTATISTICS_H

#include <vector>
#include "ApplicationStatisticsUI.h"
#include "Applicant.h"
#include "Application.h"

class ApplicationStatistics {
private:
	ApplicationStatisticsUI* applicationStatisticsUI;
	Applicant* applicant;

public:
	ApplicationStatistics();
	vector<Application>* showApplicationStatistics(Applicant* currentUser);
	ApplicationStatisticsUI* getApplicationStatisticsUI();
};

#endif
