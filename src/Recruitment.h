#ifndef RECRUITMENT_H
#define RECRUITMENT_H
#include <string>

using namespace std;

class Recruitment{ // ä������ class
private:
    string deadline; // ��������
    int numberOfPeople; // �����ο�
    string job; // ����
    int volunteerNumber; // �ش� ä�뿡 ������ ������ ��

public:
    Recruitment();
    Recruitment(string job, int numberOfPeople, string deadline);

    void increaseVolunteerNumber(); // ���ο� ������ �߻� ��, ������ ���� ���� ��Ŵ
    void decreaseVolunteerNumber(); // �����ڰ� ����� ��� ������ ���� ���� ��Ŵ

    // getter
    Recruitment getRecruitment();
    Recruitment getRecruitmentDetails();
    int getVolunteerNumber();
    string getJob(); 
    int getNumberOfPeople();
    string getDeadline();
};

#endif