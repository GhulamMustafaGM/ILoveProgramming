// Pass By Reference Program

#include <iostream>
using namespace std;

void MeraSwapNumbers(int &a, int &b) {

    int c = a;
        a = b;
        b = c;
}

int main()
{
    int Number1 = 15;
    int Number2 = 30;

    cout << "Before MeraSwapNumber: " << endl;
    cout << Number1 << Number2 << endl;

    MeraSwapNumbers(Number1, Number2);

    cout << "After MeraSwapNumber: ";
    cout << Number1 << Number2 << endl;
        
    return 0;
}
