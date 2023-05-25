#include "InquireApplication.h"
#include <iostream>

InquireApplication::InquireApplication() {
}


InquireApplicationUI* InquireApplication::getInquireApplicationUI() {

	return this->inquireApplicationUI;
}


ApplicationCollection* InquireApplication::showApplication(Applicant* applicant) {
	return applicant->listApplications();
}