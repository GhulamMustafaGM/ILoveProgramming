// Write a program to check Vowel or not.
#include<iostream>
using namespace std;

int main()
{
	char chr; // define character 

	cout << "Enter an alphabet: ";
	cin >> chr;

	if (chr == 'a' || chr == 'A' || chr == 'e' || chr == 'E' ||
		chr == 'i' || chr == 'I' || chr == 'o' || chr == 'O' ||
		chr == 'u' || chr == 'U')
	{
		cout << "Right! This is a vowel character: " << endl;
	}
	else
	{
		cout << "Wrong! This is not a vowel character: " << endl;

	}
	return 0;
}