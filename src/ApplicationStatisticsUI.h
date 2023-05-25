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
	ApplicationStatistics* applicationStatisticsController;

public:
	ApplicationStatisticsUI();
	void setApplicationStatisticsController(ApplicationStatistics* controller);
	void startApplicationStatisticsInterface();
	void applicationStatistics(ofstream* ofs, ApplicationStatistics* applicationStatistics, Applicant* currentUser);

};

#endif