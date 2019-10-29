// ManProfile print

#include<iostream>
#include<string>
using namespace std;

int main()
{
    string firstName;
    string middleName;
    string lastName;
    string space = " ";
    string dot = ".";
    string fullName;

    cout << "Enter the firstName:";
    cin >> firstName;

    cout << "Enter the middleName: ";
    cin >> middleName;

    cout << "Enter the lastName: ";
    cin >> lastName;

    fullName = firstName + space + middleName + dot + space + lastName;

    cout << "The full man name is:  " << fullName;
    cout << endl;

    return 0;

}