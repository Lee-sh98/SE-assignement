#pragma once
/*
#include "../domain/User/Applicant.h"
#include "../boundary/InquireApplicationUI.h"
*/
#include "Applicant.h"
#include "InquireApplicationUI.h"

class InquireApplication {
private:
	InquireApplicationUI* inquireApplicationUI;
public:
	InquireApplication();
	InquireApplicationUI* getInquireApplicationUI();
	ApplicationCollection* showApplication(Applicant* applicant);

};