// Print Reverse Numbers 

#include<iostream>
using namespace std;
int main()
{
	int number, reverse = 0, total;

	cout << "\nEnter a number ";
	cin >> number;
	while(number != 0)
	{
		total = number % 10;
		reverse = reverse * 10 + total;
		number = number / 10;
	}
	cout << "Reverse = " << reverse << endl;

	return 0;
}