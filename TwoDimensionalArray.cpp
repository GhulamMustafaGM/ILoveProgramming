// Two DimensionalArray

#include<iostream>
using namespace std;

int main()
{
	
	int ArrayNun[10][10], rows, cols, a, b;
	
    cout<<"Enter number of row for Array (max 10) : ";
	cin>>rows;
	
    cout<<"Enter number of column for Array (max 10) : ";
	cin>>cols;
	
    cout<<"Now Enter "<<rows<<"*"<<cols<<" Array Elements : ";
	for(a=0; a<rows; a++)
	{
		for(b=0; b<cols; b++)
		{
			cin>>ArrayNun[a][b];
		}
	}
	cout<<"The Array is :\n";
	for(a=0; a<rows; a++)
	{
		for(b=0; b<cols; b++)
		{
			cout<<ArrayNun[a][b]<<" ";
		}
		cout<<"\n";
	}
	cout << endl;
}