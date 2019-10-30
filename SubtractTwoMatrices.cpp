// Add two Matrices numbers

#include<iostream>
using namespace std;

int main()
{
	int ArrayNum1[3][3], ArrayNum2[3][3], ArrayNum3[3][3], sub, a, b;

	cout<<"Enter 3*3 Array 1 Elements : ";
	
    for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cin>>ArrayNum1[a][b];
		}
	}
	cout<<"Enter 3*3 Array 2 Elements : ";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cin>>ArrayNum2[a][b];
		}
	}
	cout<<"Subtracting array (array1-array2) ... \n";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			ArrayNum3[a][b]=ArrayNum1[a][b]-ArrayNum2[a][b];
		}
	}
	cout<<"Result of Array1 - Array2 is :\n";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cout<<ArrayNum3[a][b]<<" ";
		}
		cout<<"\n";
	}

	return 0;
}