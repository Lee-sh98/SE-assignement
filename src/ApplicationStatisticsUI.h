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
	ApplicationStatistics* applicationStatisticsController; // ApplicationStatisticsUI와 통신하는 ApplicationStatistics control객체

public:
	ApplicationStatisticsUI(); // ApplicationStatisticsUI의 생성자
	void setApplicationStatisticsController(ApplicationStatistics* controller);  // ApplicationStatisticsUI의 control을 초기화 함
	void startApplicationStatisticsInterface(); // ApplicationStatisticsUI의 시작 인터페이스를 보여줌
	void applicationStatistics(ofstream* ofs, ApplicationStatistics* applicationStatistics, Applicant* currentUser); // 현재 사용중인 User의 지원 정보 통계를 업무별로 출력

};

#endif