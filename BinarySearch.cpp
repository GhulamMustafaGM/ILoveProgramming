// Find binary Search

#include<iostream>
using namespace std;

int main()
{
	int number, a, ArrayNum[50], find, first, last, middle;

	cout << "Enter total number of elements :";
	cin >> number;

	cout << "Enter " << number << " number :";

	for (a = 0; a < number; a++)
	{
		cin >> ArrayNum[a];
	}
	cout << "Enter a number to search: ";
	cin >> find;

	first = 0;
	last = number - 1;
	middle = (first + last) / 2;

	while (first <= last)
	{
		if (ArrayNum[middle] < find)
		{
			first = middle + 1;

		}
		else if (ArrayNum[middle] == find)
		{
			cout << find << " Search at location " << middle + 1 << "\n";
			break;
		}
		else
		{
			last = middle - 1;
		}
		middle = (first + last) / 2;
	}
	if (first > last)
	{
		cout << "Sorry! Not found! " << find << " is not present in the list.";
	}
    cout << endl;
	return 0;
}