// Calculate arithmetic mean 

#include<iostream>
using namespace std;

int main()
{
    int a, b, arr[50], k = 0;

    cout << "How many number you want to enter ? \n";
    cin >> a;

    cout << "Enter " << a << " Numbers: ";

    for (b = 0; b < a; b++)
    {
        cin >> arr[b];
        k = k + arr[b];
    }
    int arithMean = k / a;

    cout << "Arithmetic Mean = " << arithMean;
    cout << endl;

	return 0;
}