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
	RecruitmentStatistics* recruitmentStatisticsController; // RecruitmentStatisticsUI와 통신하는 RecruitmentStatistics 객체 (control)

public:
	RecruitmentStatisticsUI(); // RecruitmentStatisticsUI의 생성자
	void setRecruitmentStatisticsController(RecruitmentStatistics* controller); // RecruitmentStatisticsUI의 control을 초기화 하는 함수
	void startRecruitmentStatisticsInterface(); // RecruitmentStatisticsUI의 시작 인터페이스를 보여주는 함수
	void recruitmentStatistics(ofstream* ofs, RecruitmentStatistics* recruitmentStatistics, User* currentUser); // 현재 사용중인 User의 채용 정보 통계를 업무별로 출력하는 함수
};
#endif