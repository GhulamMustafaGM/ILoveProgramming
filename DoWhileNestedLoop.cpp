// Do-While loop program

#include <iostream>
using namespace std;

int main ()
{
    int number = 1;

    do {
        int k = 1;
        do {
            cout << number << endl;
            k++;
        } while( k <= 3);
            number++;
    }while ( number <= 3);
}
