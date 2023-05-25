#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
#include "RecruitmentStatistics.h"
#include "RecruitmentStatisticsUI.h"

using namespace std;

/*
	함수 이름 : RecruitmentStatisticsUI::RecruitmentStatisticsUI()
	기능	  : RecruitmentStatisticsUI의 생성자
	전달 인자 : 없음
	반환값    : 없음
*/
RecruitmentStatisticsUI::RecruitmentStatisticsUI() {}

/*
	함수 이름 : RecruitmentStatisticsUI::setRecruitmentStatisticsController()
	기능	  : RecruitmentStatisticsUI의 control을 초기화 함
	전달 인자 : controller -> RecruitmentStatisticsUI와 통신하는 RecruitmentStatistics 객체
	반환값    : 없음
*/
void RecruitmentStatisticsUI::setRecruitmentStatisticsController(RecruitmentStatistics* controller){
	this->recruitmentStatisticsController = controller;
}

/*
	함수 이름 : RecruitmentStatisticsUI::startRecruitmentStatisticsInterface()
	기능	  : RecruitmentStatisticsUI의 시작 인터페이스를 보여줌
	전달 인자 : 없음
	반환값    : 없음
*/
void RecruitmentStatisticsUI::startRecruitmentStatisticsInterface() {

}

/*
	함수 이름 : RecruitmentStatisticsUI::recruitmentStatistics()
	기능	  : 현재 사용중인 User의 채용 정보 통계를 업무별로 출력
	전달 인자 : RecruitmentStatistics control의 포인터와 현재 사용중인 User의 포인터
	반환값    : 없음
*/
void RecruitmentStatisticsUI::recruitmentStatistics(ofstream* ofs, RecruitmentStatistics* recruitmentStatistics,  User* currentUser) {
	vector<Recruitment>* v;
	v = recruitmentStatistics->showRecruitmentStatistics((Company*) currentUser); // Recruitment형 벡터에 RecruitmentList를 저장
	*ofs << "5.1. 채용 정보 통계" << endl;
	
	int count = 0; //지원 횟수를 카운트 하기위한 변수
	int i = 0; // 업무의 종류를 카운트 하기위한 변수

	vector<string> job; // 업무의 종류를 저장하기위한 vector 

	for (Recruitment cur : (*v)) {
		job.push_back(cur.getJob()); // RecruitmentList에 존재하는 모든 Job 정보를 job 벡터에 저장
	}

	sort(job.begin(), job.end()); // 벡터 내의 저장된 정보 정렬
	
	job.erase(unique(job.begin(), job.end()),job.end()); // 중복되는 정보 제거

	for (i; i < job.size(); i++) { // 항목 내 첫번째 업무부터 마지막 업무까지 순서대로 지원 횟수 카운트 
		for (Recruitment cur : (*v)) {
			if (job[i] == cur.getJob()) {  // RecruitmentList에서 같은 값이 나왔을경우, 즉 카운트 해야할 때
				count = count + cur.getVolunteerNumber(); // 지원자 수 만큼 count 증가
			}
		}
		*ofs << job[i] << " " << count << endl; // 해당 업무의 지원자 수 출력
		count = 0; //다음 업무를 카운트 하기위해 초기화
	}
	*ofs << endl;
	
}