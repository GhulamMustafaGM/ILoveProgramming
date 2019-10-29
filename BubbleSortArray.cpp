// Buble Sort Array Program

#include<iostream>
using namespace std;

int main()
{
	
	int number, a, ArrayNum[50], b, temp;

	cout<<"Enter total number of elements :";
	cin>>number;
	
    cout<<"Enter "<< number <<" numbers :";
	
    for( a=0; a<number; a++)
	{
		cin>>ArrayNum[a];
	}
	cout<<"Sorting array using bubble sort technique.\n";
	for(a=0; a<(number-1); a++)
	{
		for( b = 0; b<(number-b-1); b++)
		{
			if(ArrayNum[b]>ArrayNum[b+1])
			{
				temp=ArrayNum[b];
				ArrayNum[b]=ArrayNum[b+1];
				ArrayNum[b+1] = temp;
			}
		}
	}
	cout<<"Elements sorted successfully!\n";
	cout<<"Sorted list in ascending order:\n";
	for(a = 0; a<number; a++)
	{
		cout <<ArrayNum[a] <<" ";
	}
}