// Find Largest Number

#include<iostream>
using namespace std;

using namespace std;

int main()
{
    int number1, number2;
    int large;

    cout << "Enter number1: ";
    cin >> number1;
    
    cout << "Enter number2: ";
    cin >> number2;

    large = number1 >= number2 ? number1 : number2;

    cout << "The larger is: " << large;
    cout << endl; 

    return 0;
}