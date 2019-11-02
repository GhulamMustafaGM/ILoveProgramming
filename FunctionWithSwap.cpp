// Finction with swap

#include<iostream>
using namespace std;

void swapFunction(int& first, int& second);

int main()
{
    int first = 10;
    int second = 20;

    swapFunction(first, second);

    cout <<"Values of first in main: " << first << endl;
    cout <<"Value of second in main: " << second;

    return 0;
}

void swapFunction(int& First, int& Second)
{
    int temp = First;
        First = Second;
        Second = temp;

        return;
}
