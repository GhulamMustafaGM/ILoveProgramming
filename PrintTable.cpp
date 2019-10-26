// Print Table 

#include<iostream>
using namespace std;

int main()
{
	int number, a, table;

	cout << "Enter a number:";
	cin >> number;

	cout<<"Table of "<< number <<" is \n\n";
		for (a = 1; a <= 10; a++)
		{
			table = number * a;

			cout << number << " * " << a << " = " << table << "\n";
		}
	return 0;
}

