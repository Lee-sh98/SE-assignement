#pragma once
#ifndef USER_H
#define USER_H
#include <string>


using namespace std;

class User {
private:
    string ID; // 사용자의 ID
    string PW; // 사용자의 PW

public:
    User();
    virtual ~User(); // 동적 형변환을 위한 가상 소멸자 선언
    User(string id, string pw);
    //getter
    string getID();
    string getPW();
};
#endif