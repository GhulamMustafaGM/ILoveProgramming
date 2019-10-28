// StartPattern4

#include<iostream>
using namespace std;

int main()
{
    int a, b, c = 17, time = 1;

    for( a = 0; a < 5; a++)
    {
        for( b = 0; b <= c; b++)
        {
            cout << " ";
        }
        c = c - 4;
        for ( b = 0; b <= time; b++)
        {
            cout << "* ";
        }

        time = time + 2; 
        
        cout << endl;
    }
    return 0;
}