// StartPattern12

#include<iostream>
using namespace std;

int main()
{
	int a, b, number = 1, incre = 1;

	for (a = 0; a < 5; a++)
	{
		for(b = 0; b < incre; b++)
        {
            cout << number ++ <<" ";
        }
        cout << endl;
        incre = incre + 2;
	}
	return 0;

}
