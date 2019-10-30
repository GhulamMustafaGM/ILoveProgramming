// Multiply Two Matrices numbers

#include<iostream>
using namespace std;

int main()
{
	int mat1[3][3], mat2[3][3], mat3[3][3], sum=0, a, b, c;

	cout<<"Enter first matrix element (3*3) : ";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cin>>mat1[a][b];
		}
	}
	cout<<"Enter second matrix element (3*3) : ";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cin>>mat2[a][b];
		}
	}
	cout<<"Multiplying two matrices...\n";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			sum=0;
			for(c=0; c<3; c++)
			{
				sum = sum + mat1[a][c] * mat2[c][b];
			}
			mat3[a][b] = sum;
		}
	}
	cout<<"\nMultiplication of two Matrices : \n";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cout<<mat3[a][b]<<" ";
		}
		cout<<"\n";
	}
	cout << endl;
}