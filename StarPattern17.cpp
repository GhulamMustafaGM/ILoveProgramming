// StarPattern17 - Floyd's Triangle

#include<iostream>
using namespace std;

int main()
{
int rang, a, b, c = 1;
	
	cout << "Enter the range numbers of line: ";
	cin >> rang;

	cout << "\nFloyd's Triangle :\n";
	for (a = 1; a <= rang; a++)
	{
		for (b = 1; b <= a; b++, c++)
		{
			cout << c << " ";
		}
		cout << "\n";
	}
    cout << endl;
	return 0;
}