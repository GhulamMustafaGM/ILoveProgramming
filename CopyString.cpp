// Print: Copy String


#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char strs1[20], strs2[20];

	cout<<"Enter a string : ";
	cin >>strs1;

	cout<<"copying string 1 into string 2 ... \n";

	strcpy(strs2, strs1);

	cout<<"String 2 after copying "<<strs2;
    cout << endl;

    return 0;
}
