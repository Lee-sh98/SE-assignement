#include <iostream>
#include <string>
#include "RecruitmentStatistics.h"
#include "RecruitmentStatisticsUI.h"

using namespace std;

/*
	함수 이름: RecruitmentStatistics::RecruitmentStatistics()
	기능: RecruitmentStatistics의 Control을 생성하는 생성자
	전달 인자: 없음
	반환값: 생성한 RecruitmentStatistics의 객체 주소
*/
RecruitmentStatistics::RecruitmentStatistics() {
	this->recruitmentStatisticsUI = new RecruitmentStatisticsUI();
}

/*
	함수 이름: RecruitmentStatistics::showRecruitmentStatistics()
	기능: Company에서 보유한 RecruitmentList를 찾아냄
	전달 인자: currentUser -> 찾으려는 Recruitment를 가지고있는 Company의 포인터
	반환값: Recruitment형 벡터 포인터
*/
vector<Recruitment>* RecruitmentStatistics::showRecruitmentStatistics(Company* currentUser) {
	return currentUser->listRecruitments()->getMyRecruitmentList();
}

/*
	함수 이름 : RecruitmentStatistics::getRecruitmentStatisticsUI()
	기능	  : RecruitmentStatistics control의 attribute중 하나인 RecruitmentStatisticsUI*를 반환하는 getter
	전달 인자 : 없음
	반환값    : recruitmentStatisticsUI -> RecruitmentStatisticsUI의 포인터
*/
RecruitmentStatisticsUI* RecruitmentStatistics::getRecruitmentStatisticsUI() { return this->recruitmentStatisticsUI; }