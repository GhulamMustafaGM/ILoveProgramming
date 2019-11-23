// Return Value Program

#include <iostream>
using namespace std;

int MeraFunction(int a)
{
    return 3 + a;
}

int MyFunction(int b)
{
    return 5-b;
}
int main()
{

    cout << "Magic Number= " << MeraFunction(3);
    cout << " \nReturned number = " << MyFunction(3);
    return 0;
}
