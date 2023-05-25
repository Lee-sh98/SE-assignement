#ifndef RECRUITMENTCOLLECTION_H
#define RECRUITMENTCOLLECTION_H
#include "Recruitment.h"
#include <vector>


class RecruitmentCollection{
private:
    vector<Recruitment> ownedRecruitment;
public:
    RecruitmentCollection();
    ~RecruitmentCollection();
    void addNewRecruitment(Recruitment recruitment);
    void addNewRecruitment(string job, int numberOfPeople, string deadline);
    vector<Recruitment>* getMyRecruitmentList();
    vector<Recruitment>* listRecruitment();
};

#endif