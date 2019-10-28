// StartPattern8

#include<iostream>
using namespace std;

int main()
{
	int a, b;
    char ch = 'A';

	for (a = 0; a < 5; a++)
	{
		for(b = 0; b<= a; b++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
	}
	return 0;

}
