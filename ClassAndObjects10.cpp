#include <iostream>
using namespace std;

class MeriClass {
    private:
        int EmpSalary;
    public:
    void setSalary(int ss) {
        EmpSalary = ss;
    }
    int getSalary() {
        return EmpSalary;
    }
};

int main()
{
    MeriClass MeraObj;
    MeraObj.setSalary(33000);
    cout << MeraObj.getSalary();

    return 0;
}
