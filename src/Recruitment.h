#ifndef RECRUITMENT_H
#define RECRUITMENT_H
#include <string>

using namespace std;

class Recruitment{ // 채용정보 class
private:
    string deadline; // 마감기한
    int numberOfPeople; // 모집인원
    string job; // 업무
    int volunteerNumber; // 해당 채용에 지원한 지원자 수

public:
    Recruitment();
    Recruitment(string job, int numberOfPeople, string deadline);

    void increaseVolunteerNumber(); // 새로운 지원자 발생 시, 지원자 수를 증가 시킴
    void decreaseVolunteerNumber(); // 지원자가 취소할 경우 지원자 수를 감소 시킴

    // getter
    Recruitment getRecruitment();
    Recruitment getRecruitmentDetails();
    int getVolunteerNumber();
    string getJob(); 
    int getNumberOfPeople();
    string getDeadline();
};

#endif