// Finding Factorial by using for loop 

#include <iostream>
using namespace std;

int main()
{
        unsigned int number;
        unsigned long facto = 1;        // long for larger numbers

        cout << "Enter a number: ";
        cin >> number; // get the number

        for ( int k = number; k > 0; k--)   // multiply 1 by
            
            facto *= k;
                                  // numb, numb-1, ..., 2, 1
        cout << "Factorial is: " << facto << endl;
        cout << endl;

    return 0;
}
