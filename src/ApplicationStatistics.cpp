#include <iostream>
#include <string>
#include "ApplicationStatistics.h"
#include "ApplicationStatisticsUI.h"

using namespace std;

ApplicationStatistics::ApplicationStatistics() {
	this->applicationStatisticsUI = new ApplicationStatisticsUI();
}

vector<Application>* ApplicationStatistics::showApplicationStatistics(Applicant* currentUser) {
	return currentUser->listApplications()->listApplication();
}

ApplicationStatisticsUI* ApplicationStatistics::getApplicationStatisticsUI() { return this->applicationStatisticsUI; }