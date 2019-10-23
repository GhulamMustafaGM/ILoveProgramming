// Wriute a program to check Alphabet or not.

#include<iostream>
using namespace std;

int main()
{
	char AnyCh;

	cout << "\nEnter any character. ";
	cin >> AnyCh;

	if ((AnyCh >= 'a' && AnyCh <= 'z') || (AnyCh >= 'A' && AnyCh <= 'Z'))
	{
		cout << AnyCh << " Yea, it is an alphabet" << endl;
	}
	else
	{
		cout << AnyCh << "Sorry!, it is not alphabet" << endl;
	}

	return 0;
}