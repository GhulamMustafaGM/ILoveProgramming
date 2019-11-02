// Function with finding leap year

#include<iostream>

using namespace std;

void Func(int b);

int main()
   {
        int a = 10;

        Func(a);

        cout << "Value of a in main: " << a << endl;
        return 0;
    }

void Func(int b) 
{
    b++;

    cout << "Value of b is Function: " << b << endl;

    return; 
}