#ifndef RECRUITMENTCOLLECTION_H
#define RECRUITMENTCOLLECTION_H
#include "Recruitment.h"
#include <vector>


class RecruitmentCollection{ // 회사의 채용정보를 관리하는 collection class
private:
    vector<Recruitment> ownedRecruitment; // 회사의 채용정보를 저장하는 벡터
public:
    RecruitmentCollection();
    ~RecruitmentCollection();
    void addNewRecruitment(Recruitment recruitment); // 새로운 채용정보를 추가 함
    void addNewRecruitment(string job, int numberOfPeople, string deadline); // 새로운 채용정보를 추가 함(함수 오버로딩)

    //getter
    vector<Recruitment>* getMyRecruitmentList();
    vector<Recruitment>* listRecruitment();
};

#endif