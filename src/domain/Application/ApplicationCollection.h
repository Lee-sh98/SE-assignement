#include "application.cpp"

class ApplicationCollection{
private:
    Application * ownedApplication;
public:
    ApplicationCollection();
    void addNewApplication();
};