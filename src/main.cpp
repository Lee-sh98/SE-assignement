#include <string>
#include <iostream>
#include <fstream>
#include <locale>

// 모든 usecase에 대한 헤더파일 include
#include "User.h"
#include "Applicant.h"
#include "Company.h"
#include "SignUp.h"
#include "SignIn.h"
#include "Withdraw.h"
#include "AddRecruitment.h"
#include "LogOut.h"
#include "ShowRecruitmentList.h"
#include "SearchRecruitment.h"
#include "Apply.h"
#include "InquireApplication.h"
#include "CancelApplication.h"
#include "ApplicationStatistics.h"
#include "RecruitmentStatistics.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void doTask();
void program_exit(int& exit_flag);

ifstream ifs;
ofstream ofs;

vector<Applicant*> applicantList; // 지원자 회원을 저장하는 벡터
vector<Company*> companyList; // 회사 회원을 저장하는 벡터


int main() {
    ifs.open(INPUT_FILE_NAME);
    ofs.open(OUTPUT_FILE_NAME);
    
    doTask();

    return 0;
}

void doTask() {
    // usecase에 대한 control과 boundary class 선언 (~84line)
    // 회원가입
    SignUp* signUp = new SignUp(&companyList, &applicantList);
    signUp->getSignUpUI()->setSignUpController(signUp);
    // 로그인
    SignIn* signIn = new SignIn(&companyList, &applicantList);
    signIn->getSignInUI()->setSignInController(signIn);
    // 회원탈퇴
    Withdraw* withDraw = new Withdraw(&companyList, &applicantList);
    withDraw->getWithdrawUI()->setWithdrawController(withDraw);
    // 로그아웃
    LogOut* logOut = new LogOut();
    LogOutUI* logOutUI = logOut->getLogOutUI();
    //채용정보 등록
    AddRecruitment* addRecruitment = new AddRecruitment();
    AddRecruitmentUI* addRecruitmentUI = addRecruitment->getAddRecruitmentUI();
    //채용정보 리스트 조회
    ShowRecruitmentList* showRecruitmentList = new ShowRecruitmentList();
    ShowRecruitmentListUI* showRecruitmentListUI = showRecruitmentList->getShowRecruitmentListUI();
    // 채용정보 검색
    SearchRecruitment* searchRecruitment = new SearchRecruitment();
    SearchRecruitmentUI* searchRecruitmentUI = searchRecruitment->getSearchRecruitmentUI();
    // 지원
    Apply* apply =new Apply();
    ApplyUI* applyUI = apply->getApplyUI();
    // 지원정보 조회
    InquireApplication* inquireApplication = new InquireApplication();
    InquireApplicationUI* inquireApplicationUI = inquireApplication->getInquireApplicationUI();
    // 지원 취소
    CancelApplication* cancelApplication = new CancelApplication();
    CancelApplicationUI* cancelApplicationUI = new CancelApplicationUI();
    // 지원 정보 통계
    ApplicationStatistics* applicationStatistics = new ApplicationStatistics();
    ApplicationStatisticsUI* applicationStatisticsUI = applicationStatistics->getApplicationStatisticsUI();
    // 채용 정보 통계
    RecruitmentStatistics* recruitmentStatistics = new RecruitmentStatistics();
    RecruitmentStatisticsUI* recruitmentStatisticsUI = recruitmentStatistics->getRecruitmentStatisticsUI();


    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;

    User* currUser = new User("",""); // 현재 로그인 중인 회원의 정보를 저장(Company or Applicant)

    while (!is_program_exit) {
        ifs >> menu_level_1 >> menu_level_2;
        switch (menu_level_1) 
        {
        case 1:
        {
            switch (menu_level_2) 
            {
            case 1: // 회원 가입
            {
                signUp->getSignUpUI()->startSignUpInterface(); // 회원가입 Boundary class의 startInterface()호출
                int userType;
                ifs >> userType;
                if (userType == 1) { // usetType == 1(Company)라면 Company회원가입 
                    signUp->getSignUpUI()->createCompany(&ifs, &ofs);
                }
                if (userType == 2) { // usetType == 2(Applicant)라면 Applicant회원가입 
                    signUp->getSignUpUI()->createApplicant(&ifs, &ofs);
                }
                break;
            }
            case 2: // 회원 탈퇴
            {
                withDraw->getWithdrawUI()->startWithdrawInterface(); // 회원탈퇴 Boundary class의 startInterface()호출
                withDraw->getWithdrawUI()->withdraw(&ofs, currUser->getID()); // 현재 로그인 중인 user ID를 함께 boundary로 전달
                break;
            }
            }
            break;
        }
        case 2:
        {
            switch (menu_level_2) 
            {
            case 1: // 로그인
            {
                signIn->getSignInUI()->startSignInInterface(); // 로그인 Boundary class의 startInterface()호출
                currUser = signIn->getSignInUI()->sighIn(&ifs, &ofs); // 로그인 진행 후, 현재 로그인 중인 정보를 저장(currUser)
                break;
            }
            case 2: // 로그아웃
            {
                logOutUI->startLogOutInterface(); // 로그아웃 Boundary class의 startInterface()호출
                logOutUI->logOut(&ofs, currUser, logOut); // 로그아웃을 진행할 현재 로그인 중인 User정보를 함께 전당
                break;
            }
            }
            break;
        }
        case 3: // 채용 관리
        {
            switch (menu_level_2) {
            case 1: // 채용 등록
            {
                addRecruitmentUI->startAddRecruitmentInterface(); // 채용등록 Boundary class의 startInterface()호출
                addRecruitmentUI->createNewRecruitment(&ifs, &ofs, addRecruitment, currUser); // 어느 회사에 채용정보를 등록할지 식별하기 위해, 현재 로그인 중인 User(Company)정보를 함께 전달
                break;
            }
            case 2: // 채용정보 조회
            {
                showRecruitmentListUI->startShowRecruitmentListInterface(); // 채용조회 Boundary class의 startInterface()호출
                showRecruitmentListUI->showMyRecruitmentList(&ofs, showRecruitmentList, currUser); // 어느 회사의 채용정보 조회인지 식별하기 위해, 현재 로그인 중인 User(Company)정보를 함께 전달
                break;
            }
            }
            break;
        }
        case 4: // 지원 관리
        {
            switch (menu_level_2) {
            case 1: // 회사명으로 채용정보 검색
            {
                searchRecruitmentUI->startSearchRecruitmentInterface(); // 채용등록 Boundary class의 startInterface()호출
                searchRecruitmentUI->findRecruitment(&ifs, &ofs,searchRecruitment ,&companyList); // 회사명으로 검색을 위해 현재 등록되어있는 회사리스트(cpmpanyList) 정보를 함께 전달
                break;
            }
            case 2: // 지원
            {
                applyUI->startApplyInterface(); // 지원 Boundary class의 startInterface()호출
                applyUI->apply(&ifs, &ofs,apply,currUser, companyList); //어느 회사에 지원했는지 식별을 위해 현재 등록되어있는 회사리스트(cpmpanyList) 정보를 함께 전달
                break;
            }
            case 3: // 지원정보 조회
            {
                inquireApplicationUI->startInquireApplicationUI(); // 지원정보 조회 Boundary class의 startInterface()호출
                inquireApplicationUI->displayApplications(&ofs,inquireApplication, currUser); // 어느 지원자의 지원정보를 조회할 지 식별하기 위해 현재 로그인 중인 User(Applicant)정보를 함께 전달
                break;
            }
            case 4: // 지원 취소
            {
                cancelApplicationUI->startCancelApplicaitonInterface(); // 지원 취소 Boundary class의 startInterface()호출
                cancelApplicationUI->selectApplication(ifs, ofs, (Applicant*)currUser, companyList); // 어느 지원자의 지원정보를 취소할 지 식별하기 위해 현재 로그인 중인 User(Applicant)정보를 함께 전달
                break;
            }
            }

            break;
        }
        case 5: // 통계 관리
        {
            switch (menu_level_2) {
            case 1: { 
                // 채용 정보 통계
                // 현재 로그인 중인 User의 식별을 위한 동적 형변환
                if (dynamic_cast<Applicant*>(currUser) == nullptr) { // 현재 로그인 중인 User가 Company일 경우
                    recruitmentStatisticsUI->startRecruitmentStatisticsInterface(); // 채용정보 통계 Boundary class의 startInterface()호출
                    recruitmentStatisticsUI->recruitmentStatistics(&ofs, recruitmentStatistics, currUser); // 어느 회사의 채용정보 통계를 조회할지 식별하기 위해, 현재 로그인 중인 Company의 정보를 함께 전달
                }
                // 지원 정보 통계 
                else { // 현재 로그인 중인 User가 Company일 경우
                    applicationStatisticsUI->startApplicationStatisticsInterface(); // 지원정보 통계 Boundary class의 startInterface()호출
                    applicationStatisticsUI->applicationStatistics(&ofs,applicationStatistics,(Applicant *)currUser); // 어느 지원자의 지원정보 통계를 조회할지 식별하기 위해, 현재 로그인 중인 Applicant의 정보를 함께 전달
                }
                break;
            }
            }
            break;
        }
        case 6:
        {
            switch (menu_level_2) {
            case 1:{
                program_exit(is_program_exit);
            }
            }
        }
        }
    }
}

void program_exit(int& exit_flag) {
    exit_flag = 1;
}