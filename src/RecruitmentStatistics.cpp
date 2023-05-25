#include <iostream>
#include <string>
#include "RecruitmentStatistics.h"
#include "RecruitmentStatisticsUI.h"

using namespace std;

RecruitmentStatistics::RecruitmentStatistics() {
	this->recruitmentStatisticsUI = new RecruitmentStatisticsUI();
}

vector<Recruitment>* RecruitmentStatistics::showRecruitmentStatistics(Company* currentUser) {
	return currentUser->listRecruitments()->getMyRecruitmentList();
}

RecruitmentStatisticsUI* RecruitmentStatistics::getRecruitmentStatisticsUI() { return this->recruitmentStatisticsUI; }