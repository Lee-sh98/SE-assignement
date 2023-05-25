#include <string>
#include <iostream>
#include <fstream>
#include <locale>
// 변경
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
//

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

// 변경
#define MAX_APPLICANT_NUM 100
#define MAX_COMPANY_NUM 100
//

using namespace std;

void doTask();
void program_exit(int& exit_flag);

ifstream ifs;
ofstream ofs;

vector<Applicant*> applicantList;
vector<Company*> companyList;


int main() {
    ifs.open(INPUT_FILE_NAME);
    ofs.open(OUTPUT_FILE_NAME);
    

    doTask();

    return 0;
}

void doTask() {
    /*
    * system에서 사용할 Company, Applicant 저장소
    * DB가 없으므로 => on memory 형태로 선언 및 Entity를 사용하는 Controller에 매개변수로 전달
    * 즉, Repository를 각 controller에 주입하는 것의 역할
    */
    //Company *companyList[MAX_COMPANY_NUM];
    //Applicant *applicantList[MAX_APPLICANT_NUM];
    //int companyIdx = 0;
    //int applicantIdx = 0;

    /*
    * 의존성 주입 
    * 모든 usecase의 controller 선언 및 boundary에 해당 controller 주입
    */
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

    User* currUser = new User("","");

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
                // communicationDiagram: 회원가입 1.
                signUp->getSignUpUI()->startSignUpInterface();

                // 사용자의 입력
                int userType;
                ifs >> userType;
                
                if (userType == 1) {
                    // communicationDiagram: 회원가입 2
                    
                    signUp->getSignUpUI()->createCompany(&ifs, &ofs);
                }
                if (userType == 2) {
                    // communicationDiagram: 회원가입 2
                    signUp->getSignUpUI()->createApplicant(&ifs, &ofs);
                }
                break;
            }
            case 2: // 회원 탈퇴
            {
                withDraw->getWithdrawUI()->startWithdrawInterface();
                withDraw->getWithdrawUI()->withdraw(&ofs, currUser->getID());
                //currUser = nullptr;
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
                // communicationDiagram: 로그인 .
                signIn->getSignInUI()->startSignInInterface();
                currUser = signIn->getSignInUI()->sighIn(&ifs, &ofs);
                break;
            }
            case 2: // 로그아웃
            {
                logOutUI->startLogOutInterface();
                logOutUI->logOut(&ofs, currUser, logOut);
                break;
            }
            }
            break;
        }
        case 3: // 채용 관리
        {
            switch (menu_level_2) {
            case 1:
            {
                addRecruitmentUI->startAddRecruitmentInterface();
                
                addRecruitmentUI->createNewRecruitment(&ifs, &ofs, addRecruitment, currUser);

                break;
            }
            case 2:
            {
                showRecruitmentListUI->startShowRecruitmentListInterface();
                showRecruitmentListUI->showMyRecruitmentList(&ofs, showRecruitmentList, currUser);

                break;
            }
            }
            break;
        }
        case 4: // 지원 관리
        {
            switch (menu_level_2) {
            case 1: 
            {
                searchRecruitmentUI->startSearchRecruitmentInterface();
                searchRecruitmentUI->findRecruitment(&ifs, &ofs,searchRecruitment ,&companyList);
                break;
            }
            case 2: 
            {
                applyUI->startApplyInterface();
                applyUI->apply(&ifs, &ofs,apply,currUser, companyList);
                break;
            }
            case 3: 
            {
                inquireApplicationUI->startInquireApplicationUI();
                inquireApplicationUI->displayApplications(&ofs,inquireApplication, currUser);
                break;
            }
            case 4: 
            {
                cancelApplicationUI->startCancelApplicaitonInterface();
                cancelApplicationUI->selectApplication(ifs, ofs, (Applicant*)currUser,companyList);
                break;
            }
            }

            break;
        }
        case 5: // 통계 관리
        {
            switch (menu_level_2) {
            case 1: {

                if (dynamic_cast<Applicant*>(currUser) == nullptr) {    // 채용 정보 통계
                    recruitmentStatisticsUI->startRecruitmentStatisticsInterface();
                    recruitmentStatisticsUI->recruitmentStatistics(&ofs, recruitmentStatistics,currUser);
                }
                else {  // 지원 정보 통계
                    applicationStatisticsUI->startApplicationStatisticsInterface();
                    applicationStatisticsUI->applicationStatistics(&ofs,applicationStatistics,(Applicant *)currUser);
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