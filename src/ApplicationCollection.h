#include "Application.h"
#include <vector>

class ApplicationCollection{ // 지원서 collection class
private:
    vector<Application>* ownedApplication;  // 지원자가 지원한 지원서 목록을 벡터형으로 가지고 있음 
public:
    ~ApplicationCollection();
    ApplicationCollection();
    void addNewApplication(string companyName, int businessnumber, Recruitment recruitment); // 새로운 지원정보를 추가함
    // getter
    vector<Application>* listApplication();
};