#include "Applicant.h"

Applicant::Applicant(string name, int registrationNumber, string id, string pw):User(id, pw){
    applicnatName = name;
        this->registrationNumber = registrationNumber;
}

ApplicationCollection Applicant::listApplications(){
    
}