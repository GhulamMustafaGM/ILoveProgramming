// StartPattern9

#include<iostream>
using namespace std;

int main()
{
	int a, b;
    char ch = 'A';

	for (a = 0; a < 5; a++)
	{
		for(b = 0; b <= a; b++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
	}
	return 0;

}
