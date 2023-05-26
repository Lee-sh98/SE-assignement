#include "Application.h"
#include <vector>

class ApplicationCollection{ // ������ collection class
private:
    vector<Application>* ownedApplication;  // �����ڰ� ������ ������ ����� ���������� ������ ���� 
public:
    ~ApplicationCollection();
    ApplicationCollection();
    void addNewApplication(string companyName, int businessnumber, Recruitment recruitment); // ���ο� ���������� �߰���
    // getter
    vector<Application>* listApplication();
};