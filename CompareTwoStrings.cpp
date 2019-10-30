// Print: Compare Two Strings

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char strs1[100], strs2[100];

	cout<<"Enter first string : ";
	cin >>strs1;

	cout<<"Enter second string : ";
	cin >> strs2;

	if(strcmp(strs1, strs2)==0)
	{
		cout<<"Both the strings are equal";
	}
	else
	{
		cout<<"Both the strings are not equal";
	}

    cout << endl;
	
    return 0;
}