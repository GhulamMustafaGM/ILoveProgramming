// StarPattern19 - SmilingFace
#include<iostream>
using namespace std;

int main()
{
	int smile = 1, a, limit;
	char ch = smile;

	cout << "Enter number of smiley face:";
	cin >> limit;
	for (a = 0;  a< limit; a++)
	{
		cout << ch << " ";
	}
	cout << endl;
	return 0;
}
