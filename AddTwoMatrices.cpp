// Add two Matrices numbers

#include<iostream>
using namespace std;

int main()
{
	int mat1[3][3], mat2[3][3], a, b, mat3[3][3];
	
    cout<<"Enter matrix 1 elements :";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cin>>mat1[a][b];
		}
	}
	cout<<"Enter matrix 2 elements :";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cin>>mat2[a][b];
		}
	}
	cout<<"Adding the two matrix to form the third matrix .....\n";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			mat3[a][b]=mat1[a][b]+mat2[a][b];
		}
	}
	cout<<"The two matrix added successfully.!";
	cout<<"The new matrix will be :\n";
	for(a=0; a<3; a++)
	{
		for(b=0; b<3; b++)
		{
			cout<<mat3[a][b]<<" ";
		}
		cout<<"\n";
	}
	cout << endl;

    return 0;
}