// Search largest of three numbers

#include<iostream>
using namespace std;
int main()
{
	int i, j, k;
	int large;

	cout << "Enter three numbers: ";
	cin >> i >> j >> k;

	large = i;
	if (large < j)
	{
		if (j > k)
		{
			large = j;
		}
		else
		{
			large = k; 
		}
	}
	else if (large > k)
	{
		if (k > j)
		{
			large = k;
		}
		else
		{
			large = j;
		}
	}
	else
	{
		large = i;
	}
	cout << "Biggest numberis " << large;
	cout << endl;

	return 0;
}