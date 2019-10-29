// StarPattern20 - One DimensionalArray 

#include<iostream>
using namespace std;

int main()
{
	
	int OneDimensionalArray[50], number;
	cout << "How many element you want to store in the array ? ";
	cin >> number;
	
	cout << "Enter " << number << " element to store in the array : ";
	
	for (int a = 0; a < number; a++)
	{
		cin >> OneDimensionalArray[a];
	}
	cout << "The Elements in the Array is :\n ";
	for (int b = 0; b < number; b++)
	{
		cout << OneDimensionalArray[b] << " ";
	}
    cout << endl;
	return 0;
}