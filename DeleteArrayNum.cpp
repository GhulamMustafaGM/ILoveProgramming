// DeleteArrayNum program

#include<iostream>

using namespace std;

int main()
{
	int ArrayNum[60], size, a, delet, count = 0;

	cout << "Enter array size: ";
	cin >> size;
	
	cout << "Enter array elements : ";
	for( a = 0; a < size; a++)
	{
		cin >> ArrayNum[a];
	}
	cout << "Enter element to be delete : ";
	cin >> delet;

	for ( a = 0; a < size; a++)
	{
		if(ArrayNum[a] == delet)
		{
			for ( int b = a; b < (size-1); b++)
			{
				ArrayNum[b] = ArrayNum[b+1];
			}
			count++;
			break;
		}
	}
	if (count == 0)
	{
		cout << "Element not found!";
	}
	else 
	{
		cout << " Element deleted successfully!\n";
		cout << " Now the new array is:\n";
		for ( a = 0; a <(size-1); a++)
		{
			cout << ArrayNum[a] << " ";
		}
	}
    cout << endl;
	return 0;
}