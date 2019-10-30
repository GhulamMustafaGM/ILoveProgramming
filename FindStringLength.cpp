// Print StringLength

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char strs[20];
	int len;


	cout<<"Enter a string : ";
	cin >> strs;

	len = strlen(strs);

	cout<<"Length of the string is "<<len;

    return 0;
}
