// HCF and LCM, two numbers

#include<iostream>
using namespace std;
int main()
{   
    int i, j, x, y, k, hcf, icm;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    i = x;
    j = y;

    while (j != 0)
    {
        k = j;
        j = i % j;
        i = k;
    }

    hcf = i;

    icm = (x * y) / hcf;

    cout << "HCF = " << hcf << endl;
    cout << "ICM = " << icm << endl;
    
	return 0;
}