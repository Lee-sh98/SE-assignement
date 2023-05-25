#include "AddRecruitment.h"
#include <vector>

void AddRecruitmentUI::startAddRecruitmentInterface() {}

void AddRecruitmentUI::createNewRecruitment(ifstream* ifs, ofstream* ofs, AddRecruitment* addRecruitment, User* currentUser) {
	string job, deadline;
	int numberOfPeople;
	*ifs >> job >> numberOfPeople >> deadline;
	addRecruitment->addNewRecruitment(job, numberOfPeople, deadline, (Company*)currentUser);
	*ofs << "3.1 ä������ ���" << endl << job << " " << numberOfPeople << " " << deadline << endl << endl;
}