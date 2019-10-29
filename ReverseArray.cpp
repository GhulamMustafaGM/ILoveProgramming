// Reverse Array

#include<iostream>
using namespace std;

int main()
{
	int ArrayNum[80], size, a, b, temp;

	cout <<"Enter array size: ";
	cin >> size;

	cout << "Enter array elements: ";
	for(a = 0; a < size; a++)
	{
		cin >> ArrayNum[a];
	}
	b = a-1; // point to the last element 
	a = 0; // point to the first element 

	while (a < b)
	{
		temp = ArrayNum[a];
		ArrayNum[a] = ArrayNum[b];
		ArrayNum[b] = temp;
		a++;
		b--;
	}
	cout <<"Reverse of the Arry: \n";
	for (a = 0; a < size; a++)
	{
		cout << ArrayNum[a] << " ";
		
	}
	cout << endl;
	return 0;
}