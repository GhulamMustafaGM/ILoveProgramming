// StartPattern14

#include<iostream>
using namespace std;

int main()
{
	int a, b, incre = 1;
	char ch = 'A';
	
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < incre; b++)
		{
			cout << ch << " ";
			ch++;
		}
		cout << "\n";
		incre = incre + 2;
	}
    cout << endl;
	return 0;
}