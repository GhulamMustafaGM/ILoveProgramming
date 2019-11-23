// Function Overloading Program

#include <iostream>
using namespace std;

int AddNumbers(int a, int b) {

    return a + b;
}

double AddNumbersDouble(double a, double b )
{
    return a + b;
}

int main()
{
    
        int MeraNumber1 = AddNumbers(10, 15);
        double MeraNumber2 = AddNumbersDouble(4.5, 7.1);

        cout << "Mera IntType: " << MeraNumber1 << endl;
        cout << "Double Type: " << MeraNumber2 << endl;

    return 0;
}
