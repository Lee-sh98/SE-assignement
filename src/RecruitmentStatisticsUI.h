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
	RecruitmentStatistics* recruitmentStatisticsController;

public:
	RecruitmentStatisticsUI();
	void setRecruitmentStatisticsController(RecruitmentStatistics* controller);
	void startRecruitmentStatisticsInterface();
	void recruitmentStatistics(ofstream* ofs, RecruitmentStatistics* recruitmentStatistics, User* currentUser);
};
#endif