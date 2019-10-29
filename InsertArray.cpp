// InsertArray program

#include<iostream>

using namespace std;

int main()
{
	int ArrayNum[70], size, insert, a, pos;

	cout << "Enter Array size: ";
	cin >> size;

	cout << "Enter array elements: ";

	for (a = 0; a < size; a++)
	{
		cin >> ArrayNum[a];
	}

	cout << "Enter element to be insert: ";
	cin >> insert;

	cout << "At which position (Enter index number) ? ";
	cin >> pos;

	// Create a space at the required position 

	for (a = size; a > pos; a--)
	{
		ArrayNum[a] = ArrayNum[a-1];
	}
	
    ArrayNum[pos] = insert;

	cout << "Element inserted successfully!\n";
	cout << "The new array is: \n";
    
	for ( a = 0; a < size + 1; a++)
	{
		cout << ArrayNum[a] << " ";
	}
    cout << endl;

	return 0;
}