// Fibonacci seriess Program

#include<iostream>
using namespace std;

int main()
{
	int i = 0, j = 1, k = 0, limit;

	cout << "Enter numbers. How many term : ";
	cin >> limit;

	cout << "Fabonoacci series: " << i << " " << j << " "; //firs two term

	k = i + j;

	limit = limit - 2; // decrease the limit by 2 numbers

	while (limit)
	{
		cout << k << " ";
	    i = j;
		j = k;
		k = i + k;
		limit--;
	}

	return 0;
}