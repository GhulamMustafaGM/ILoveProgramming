// Function with default value

#include<iostream>
using namespace std;

double Salary(double rate, double hours =40);

int main()
{
    cout << "Emplyee 1 Paid: " << Salary(22.0) << endl;
    cout << "Emplyee 2 Paid: " << Salary(12.50, 18);
    cout << endl;
    return 0;
}

double Salary(double rate, double hours)
{
    double pay;

    pay = hours * rate;

    return pay;
}