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
	RecruitmentStatisticsUI* recruitmentStatisticsUI; // RecruitmentStatisticsUI�� ����ϴ� RecruitmentStatistics��ü (control)

public:
	RecruitmentStatistics(); // RecruitmentStatistics�� Control�� �����ϴ� ������
	vector<Recruitment>* showRecruitmentStatistics(Company* currentUser); // Company���� ������ RecruitmentList�� ã�Ƴ�
	RecruitmentStatisticsUI* getRecruitmentStatisticsUI(); // RecruitmentStatistics control�� attribute�� �ϳ��� RecruitmentStatisticsUI*�� ��ȯ�ϴ� getter
};

#endif