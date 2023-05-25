#include "Application.h"
#include <vector>

class ApplicationCollection{
private:
    vector<Application>* ownedApplication;
public:
    ~ApplicationCollection();
    ApplicationCollection();
    void addNewApplication(string companyName, int businessnumber, Recruitment recruitment);
    vector<Application>* listApplication();
};