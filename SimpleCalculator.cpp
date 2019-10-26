// SimpleCalculator Program

#include<iostream>
using namespace std;

int main()
{
	int i, j, k;

    cout << "Enter two numbers: ";
    cin >> i;

    k = i + j;
    cout << "\nAddition = " << k; 

    k = i - j;
    cout << "\nSubstraction = " << k;

    k = i * j;
    cout << "\nMultiplication = " << k;

    k = i / j;
    cout << "\nDivision = " << k;

    k = i % j;
    cout << "\nRemainder = " << k;
	
	return 0;
}
