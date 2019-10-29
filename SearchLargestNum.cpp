// Search largest number in Array
#include<iostream>
using namespace std;

int main()
{
	int big, ArrayNum[50], size, a;

	cout<<"Enter array size (max 70) : ";
	cin>>size;

	cout<<"Enter array elements : ";
	for (a = 0; a < size; a++)
	{
		cin >> ArrayNum[a];
	}

	cout<<"Searing for largest number ... \n\n";
	big = ArrayNum[0];

	for(a = 0; a < size; a++)
	{
		if(big<ArrayNum[a])
		{
			big = ArrayNum[a];
		}
	}
	cout<< "Largest Number = "<< big;
	cout << endl;
	return 0;

}