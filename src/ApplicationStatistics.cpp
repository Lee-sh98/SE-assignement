#include <iostream>
#include <string>
#include "ApplicationStatistics.h"
#include "ApplicationStatisticsUI.h"

using namespace std;
/*
	함수 이름: ApplicationStatistics::ApplicationStatistics()
	기능: ApplicationStatistics의 Control을 생성하는 생성자
	전달 인자: 없음
	반환값: 생성한 ApplicationStatistics의 객체 주소
*/
ApplicationStatistics::ApplicationStatistics() {
	this->applicationStatisticsUI = new ApplicationStatisticsUI();
}


/*
	함수 이름: ApplicationStatistics::showApplicationStatistics()
	기능: Applicant에서 보유한 ApplicationList를 찾아냄
	전달 인자: currentUser -> 찾으려는 Appication을 가지고있는 Applicant의 포인터
	반환값: Application형 벡터 포인터
*/
vector<Application>* ApplicationStatistics::showApplicationStatistics(Applicant* currentUser) {
	return currentUser->listApplications()->listApplication();
}

/*
	함수 이름 : ApplicationStatistics::getApplicationStatisticsUI()
	기능	  : ApplicationStatistics control의 attribute중 하나인 ApplicationStatisticsUI*를 반환하는 getter
	전달 인자 : 없음
	반환값    : applicationStatisticsUI -> ApplicationStatisticsUI의 포인터
*/
ApplicationStatisticsUI* ApplicationStatistics::getApplicationStatisticsUI() { return this->applicationStatisticsUI; }