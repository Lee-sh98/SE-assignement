#include <string>
#include <iostream>
#include <fstream>

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

void doTask();
void join();
void program_exit(int& exit_flag);

ifstream ifs;
ofstream ofs;

int main(){
    
    ifs.open(INPUT_FILE_NAME);
    ofs.open(OUTPUT_FILE_NAME);
    
    doTask();

    return 0;
}

void doTask(){
    int menu_level_1 = 0, menu_level_2=0;
    int is_program_exit = 0;

    while(!is_program_exit){
        ifs>>menu_level_1>>menu_level_2;
        
        switch(menu_level_1){
            case 1:
            {
                switch(menu_level_2){
                    case 1: // 회원 가입
                    {
                        join();
                        break;
                    }
                    case 2: // 회원 탈퇴
                    {

                    }
                }
                break;
            }
            case 2:
            {
                switch(menu_level_2){

                }
            }
            case 3: // 채용 관리
            {
                switch (menu_level_2){

                }
            }
            case 4: // 지원 관리
            {
                switch (menu_level_2){

                }
            }
            case 5: // 통계 관리
            {
                switch (menu_level_2){

                }
            }
            case 6:
            default:
            {
                switch (menu_level_2){
                    case 1:
                    {
                        program_exit(is_program_exit);
                    }
                }
            }
            break;
        }
    }
}

void join(){
    int userType;
    ifs>>userType;
    
    if(userType==1){
        string companyName, companyID,companyPW;
        int businessNumber;
        ifs>>companyName>>businessNumber>>companyID>>companyPW;

        cout<<"company user : "<<companyName<<" "<<businessNumber<<" "<<companyID<<" "<<companyPW<<endl;
    }
    if(userType==2){
        string name, ID, PW;
        int registrationNumber;
        ifs>>name>>registrationNumber>>ID>>PW;
        cout<<"applicant user : "<<" "<<name<<" "<<registrationNumber<<" "<<ID<<" "<<PW<<endl;
    }
}

void program_exit(int& exit_flag){
    exit_flag=1;
}