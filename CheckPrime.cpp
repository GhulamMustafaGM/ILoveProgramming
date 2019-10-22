// Check Prime Number or Not.

#include<iostream>
using namespace std;

int main()
{
	int n, k, counter = 0;

	cout << "\nEnter a number:";
	cin >> n;

	for (k = 2; k < n; k++)
	{
		if (n % k == 0)
		{
			counter++;
			break;
		}
	}
	if (counter == 0)
	{
		cout << "It's a prime number" << endl;
	}
	else
	{
		cout << "It's not a prime number" << endl;
	}

	return 0;
}