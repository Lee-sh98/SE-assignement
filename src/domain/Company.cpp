#include "User.cpp"

class Company:public User{
private:
    string companyName;
    int businessNumber;
public:
    Company(string companyName, int businessNumber, string id, string pw):User(id, pw){
        this->companyName = companyName;
        this->businessNumber = businessNumber;
    }

};