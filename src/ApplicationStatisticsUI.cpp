#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "ApplicationStatistics.h"
#include "ApplicationStatisticsUI.h"

using namespace std;

ApplicationStatisticsUI::ApplicationStatisticsUI() {}

void ApplicationStatisticsUI::setApplicationStatisticsController(ApplicationStatistics* controller) {
	this->applicationStatisticsController = controller;
}

void ApplicationStatisticsUI::startApplicationStatisticsInterface() {

}

void ApplicationStatisticsUI::applicationStatistics(ofstream* ofs, ApplicationStatistics* applicationStatistics, Applicant* currentUser) {
	vector<Application>* v;
	v = applicationStatistics->showApplicationStatistics((Applicant*)currentUser);
	*ofs << "5.1. 지원 정보 통계" << endl;

	int count = 0;
	int i = 0;

	vector<string> job;

	for (Application cur : (*v)) {
		job.push_back(cur.getRecruitment().getJob());
	}

	sort(job.begin(), job.end());

	job.erase(unique(job.begin(), job.end()), job.end());

	for (i; i < job.size(); i++) {
		for (Application cur : (*v)) {
			if (job[i] == cur.getRecruitment().getJob()) {
				count++;
			}
		}
		*ofs << job[i] << " " << count << endl;
		count = 0;
	}
	*ofs << endl;
}