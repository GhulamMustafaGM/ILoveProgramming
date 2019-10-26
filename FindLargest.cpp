// Search largest of two numbers

#include<iostream>
using namespace std;
int main()
{
	int i, j, large;

	cout << "\nEnter two numbers: ";
	cin >> i >> j;

	if (i > j)
	{
		large = i;
	}
	else 
	{
		large = j;
	}
	cout << "Biggest of the two number is " << large;
	cout << endl;

	return 0;

}