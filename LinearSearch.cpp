// Linear Search

#include<iostream>
using namespace std;

int main()
{
	int ArrayNum[10], a, number, n1, c1 = 0, pos;
	cout << "Enter the array size : ";
	cin >> number;

	cout << "Enter Array Elements : ";
	for (a = 0; a < number; a++)
	{
		cin >> ArrayNum[a];
	}
	cout << "Enter the number to be search : ";
	cin >> number;
	for (a = 0; a < number; a++)
	{
		if (ArrayNum[a] == number)
		{
			c1 = 1;
			pos = a + 1;
			break;
		}
	}
	if (c1 == 0)
	{
		cout << "This number not found.!";
	}
	else
	{
		cout << number << " number found at position " << pos;
	}
    cout << endl;
	return 0;
}
