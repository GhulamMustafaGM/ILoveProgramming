// StarPattern18 - PascalTriangle

#include<iostream>
using namespace std;

long fact(int);

int main()
{
int a, b, number;

	cout << "Enter number of rows : ";
	cin >> number;

	for (a = 0; a < number; a++)
	{
		for (b = 0; b <= (number - a - 2); b++)
		{
			cout << " ";
		}
		for (b = 0; b <= a; b++)
		{
			cout << fact(a) / (fact(b)*fact(a - b));
			cout << " ";
		}
		cout << "\n";
	}
	return 0;
}

long fact(int number)
{
	int b;
	long res = 1;
	for (b = 1; b <= number; b++)
	{
		res = res * b;
	}
	return (res);
}