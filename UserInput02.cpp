// Addition two values

#include<iostream>
using namespace std;

int main()
{
    int number1, number2, sum; // variables declaration

    cout << "Enter the FirstNumber: "; // User input
    cin >> number1;

    cout << "Enter the SecondNumber: ";
    cin >> number2;

    sum = number1 + number2;

    cout << "The total sum is :" << sum; // Display result
    cout << endl;

    return 0;

}