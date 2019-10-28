// StartPattern10

#include<iostream>
using namespace std;

int main()
{
	int a, b;
   
	for (a = 0; a < 5; a++)
	{
		for(b = 5; b > a; b--)
        {
            cout << "* ";
        }
        cout << endl;
	}
	return 0;

}
