// StartPattern11

#include<iostream>
using namespace std;

int main()
{
	int a, b, number = 1;

	for (a = 0; a < 5; a++)
	{
		for(b = 5; b > a; b--)
        {
            cout << number <<" ";
            number++;
        }
        cout << endl;
        number = 1;
	}
	return 0;

}
