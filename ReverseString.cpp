// Print: Concatenate String

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char strs[100], temp;
	int a=0, b;

	cout<<"Enter the String : ";
	cin >> strs;

	b=strlen(strs)-1;
	while(a<b)
	{
		temp=strs[a];
		strs[a]=strs[b];
		strs[b]=temp;
		a++;
		b--;
	}
	cout<<"Reverse of the String = "<<strs;
	cout << endl;
    return 0;
}
