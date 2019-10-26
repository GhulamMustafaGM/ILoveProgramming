// SimpleCalculator2 Program

#include<iostream>
using namespace std;

int main()
{
	int i, j;
    char ch;

    cout << "Enter Number1: ";
    cin >> i;

    cout << "Enter Number2: ";
    cin >> j;

    cout << "Enter Operator (+, -, *, /, %) :";
    cin >> ch;

    if (ch == '+')
		cout << "Result = " << i + j << endl; 

	else if (ch == '-')
		cout << "Result = " << i - j << endl;

	else if (ch == '*')
		cout << "Result = " << i * j << endl;

	else if (ch == '/')
		cout << "Result = " << i / j << endl;

	else if (ch == '%')
		cout << "Result = " << i % j << endl;

	else
		cout << "Wrong Operator! used " << endl;

   	return 0;
}
