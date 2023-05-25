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
	RecruitmentStatisticsUI* recruitmentStatisticsUI; // RecruitmentStatisticsUI와 통신하는 RecruitmentStatistics객체 (control)

public:
	RecruitmentStatistics(); // RecruitmentStatistics의 Control을 생성하는 생성자
	vector<Recruitment>* showRecruitmentStatistics(Company* currentUser); // Company에서 보유한 RecruitmentList를 찾아냄
	RecruitmentStatisticsUI* getRecruitmentStatisticsUI(); // RecruitmentStatistics control의 attribute중 하나인 RecruitmentStatisticsUI*를 반환하는 getter
};

#endif