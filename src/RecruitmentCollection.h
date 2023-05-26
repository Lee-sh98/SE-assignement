#ifndef RECRUITMENTCOLLECTION_H
#define RECRUITMENTCOLLECTION_H
#include "Recruitment.h"
#include <vector>


class RecruitmentCollection{ // ȸ���� ä�������� �����ϴ� collection class
private:
    vector<Recruitment> ownedRecruitment; // ȸ���� ä�������� �����ϴ� ����
public:
    RecruitmentCollection();
    ~RecruitmentCollection();
    void addNewRecruitment(Recruitment recruitment); // ���ο� ä�������� �߰� ��
    void addNewRecruitment(string job, int numberOfPeople, string deadline); // ���ο� ä�������� �߰� ��(�Լ� �����ε�)

    //getter
    vector<Recruitment>* getMyRecruitmentList();
    vector<Recruitment>* listRecruitment();
};

#endif