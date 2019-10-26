// Total number calculate 

#include<iostream>
{
    int i, j = 0, k = 0;

    cout << "\nEnter a number: ";
    cin >> i;

    int temp = i;

    while ( i > 0)
    {
        j = i % 10;
        k = k + j;
        i = i / 10;
    }

    cout << "Sum of the digitas of " << temp << " is " << k;
    cout << endl;

	return 0;
}