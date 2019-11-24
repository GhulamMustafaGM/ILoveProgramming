#include <iostream>
using namespace std;

// Base class
class Job {
  protected:  // Protected access specifier
    int JobSalary;
};

// Derived class
class Developer: public Job {
    public:
    int bonus;
    void setJobSalary(int s) {
        JobSalary = s;
    }
    int getJobSalary() {
        return JobSalary;
    }
};

int main() {
    Developer myObj;
    myObj.setJobSalary(50000);
    myObj.bonus = 15000;
    cout << "Salary: " << myObj.getJobSalary() << "\n";
    cout << "Bonus Salary: " << myObj.bonus << "\n";
    return 0;
}
