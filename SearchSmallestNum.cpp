// Search smallest number

#include<iostream>
using namespace std;

int main()
{
	int small, ArrayNum[60], size, a;

	cout<< "Enter Array size (max 60) : ";
	cin >> size;

	cout << "Enter array elements : ";

	for(a = 0; a < size; a++)
	{
		cin >> ArrayNum[a];
	}
	cout<<"Searching for smallest element... \n\n";

	small = ArrayNum[0];
	
	for(a = 0; a < size; a++)
	{
		if(small > ArrayNum[a])
		{
			small = ArrayNum[a];
		}
		
	}
	cout << "Smallest element = " << small;
	cout << endl;
	return 0;
}