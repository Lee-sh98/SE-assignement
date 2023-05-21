#include <string>
using namespace std;

class Recruitment{
private:
    string deadline;
    int numberOfPeople;
    string job;
    int volunteerNumber;

public:
    Recruitment();
    Recruitment(string job, int numberOfPeople, string deadline);
    Recruitment getRecruitment();
    Recruitment getRecruitmentDetails();
    int getVolunteerNumber();
};