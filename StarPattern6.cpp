// StartPattern6

#include<iostream>
using namespace std;

int main()
{
    int a, b, number = 1;

    for( a = 0; a < 5; a++)
    {
        number = 1;

        for( b = 0; b <= a; b++)
        {
            cout << number << " ";
            number++;
        }
        
        cout << endl;
    }
    return 0;
}