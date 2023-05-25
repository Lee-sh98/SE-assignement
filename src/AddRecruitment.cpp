#include "AddRecruitment.h"


AddRecruitment::AddRecruitment() {
  this->addRecruitmentUI = new AddRecruitmentUI();
}

AddRecruitmentUI* AddRecruitment::getAddRecruitmentUI() {
  return this->addRecruitmentUI;
}

void AddRecruitment::addNewRecruitment(string job, int numberOfPeople, string deadline, Company* currentUser) {
	currentUser->getRecruitmentCollection()->addNewRecruitment(job, numberOfPeople, deadline);
}