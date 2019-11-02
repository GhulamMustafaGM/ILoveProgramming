// Function with passing by references

#include<iostream>
using namespace std;

void Func(int& b);

int main()
{
int a = 10;

Func(a);

cout << "Value of a in main: " << a << endl;

return 0;
}

void Func(int& b)
{
    b++;

    cout <<"Value of b in Func: " << b << endl;

    return;
}




