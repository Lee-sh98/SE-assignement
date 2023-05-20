#include "User.cpp"

class Applicant: public User{
private:
    string applicnatName;
    int registrationNumber;

public:
    Applicant(string name, int registrationNumber, string id, string pw):User(id, pw){
        applicnatName = name;
        this->registrationNumber = registrationNumber;
    }
};