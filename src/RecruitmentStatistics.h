#pragma once
#ifndef RECRUITMENTSTATISTICS_H
#define RECRUITMENTSTATISTICS_H

#include <iostream>
#include <vector>
#include "RecruitmentStatisticsUI.h"
#include "Company.h"
#include "Recruitment.h"


class RecruitmentStatistics {
private:
	RecruitmentStatisticsUI* recruitmentStatisticsUI;
	Company* company;

public:
	RecruitmentStatistics();
	vector<Recruitment>* showRecruitmentStatistics(Company* currentUser);
	RecruitmentStatisticsUI* getRecruitmentStatisticsUI();
};

#endif