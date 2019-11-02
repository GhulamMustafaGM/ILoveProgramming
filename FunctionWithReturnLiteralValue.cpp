// Function with Return value of Literal

#include<iostream>
using namespace std;

bool Even(int a);

int main()
{
    cout << boolalpha << Even(5) << endl;
    cout << boolalpha << Even(10);

    return 0;
}

bool Even(int a)
{
    return ((a % 2) ==0);
}
