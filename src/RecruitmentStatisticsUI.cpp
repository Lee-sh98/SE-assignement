#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "RecruitmentStatistics.h"
#include "RecruitmentStatisticsUI.h"

using namespace std;

RecruitmentStatisticsUI::RecruitmentStatisticsUI() {}

void RecruitmentStatisticsUI::setRecruitmentStatisticsController(RecruitmentStatistics* controller){
	this->recruitmentStatisticsController = controller;
}

void RecruitmentStatisticsUI::startRecruitmentStatisticsInterface() {

}

void RecruitmentStatisticsUI::recruitmentStatistics(ofstream* ofs, RecruitmentStatistics* recruitmentStatistics,  User* currentUser) {
	vector<Recruitment>* v;
	v = recruitmentStatistics->showRecruitmentStatistics((Company*) currentUser);
	*ofs << "5.1. 채용 정보 통계" << endl;
	
	int count = 0;
	int i = 0;

	vector<string> job;

	for (Recruitment cur : (*v)) {
		job.push_back(cur.getJob());
	}

	sort(job.begin(), job.end());
	
	job.erase(unique(job.begin(), job.end()),job.end());

	for (i; i < job.size(); i++) {
		for (Recruitment cur : (*v)) {
			if (job[i] == cur.getJob()) {
				count = count + cur.getVolunteerNumber();
			}
		}
		*ofs << job[i] << " " << count << endl;
		count = 0;
	}
	*ofs << endl;
	
}