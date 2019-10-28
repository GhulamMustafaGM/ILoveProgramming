// StartPattern3

#include<iostream>
using namespace std;

int main()
{
    int a, b, c = 9;

    for( a = 0; a < 5; a++)
    {
        for( b = 0; b <= c; b++)
        {
            cout << " ";
        }
        c = c - 2;
        for ( b = 0; b <= a; b++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}