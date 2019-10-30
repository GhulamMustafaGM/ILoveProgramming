// Insertion Sort Array Program

#include<iostream>
using namespace std;

int main()
{
	
	int size, ArrayNum[60], a, b, temp;
	
    cout<<"Enter Array Size : ";
	cin>>size;

	cout<<"Enter Array Elements : ";
	for(a=0; a<size; a++)
	{
		cin>>ArrayNum[a];
	}
	cout<<"Sorting array using selection sort ... \n";
	for(a=1; a<size; a++)
	{
		temp=ArrayNum[a];
		b=a-1;
		while((temp<ArrayNum[b]) && (b>=0))
		{
			ArrayNum[b+1]=ArrayNum[b];
			b=b-1;
		}
		ArrayNum[b+1]=temp;
	}
	cout<<"Array after sorting : \n";
	for(a=0; a<size; a++)
	{
		cout<<ArrayNum[a]<<" ";
	}
	cout << endl;
}