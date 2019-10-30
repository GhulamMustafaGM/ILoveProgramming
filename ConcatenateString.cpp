// Print: Concatenate String

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char strs1[60], strs2[60];

	cout<<"Enter first string : ";
	cin >>strs1;

	cout<<"Enter second string : ";
	cin >> strs2;

	strcat(strs1, strs2);

	cout<<"String after concatenation is "<<strs1;
    cout << endl;

    return 0;
}
