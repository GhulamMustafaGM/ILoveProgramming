// Convert Uppercaser to Lowercase strings

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{

	char character;

	cout<<"Enter a character in uppercase : ";
	cin>>character;

	character = character+32;
	cout<<"character in lowercase = "<<character;

	cout << endl;
}

