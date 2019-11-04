// Finding Fourth Power by using for while

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
         int power = 1;    // power initially 1
    int number = 1;       // numb goes form 1 to ???

    while ( power < 10000 )                          // lop while power <= 4 digits
    {
        cout << setw(2) << number;                  // display number
        cout << setw(5) << power << endl;          // display fourth power
        ++number;      
                                   // get ready for next power
        power = number * number * number * number; // calculate fourth power
    }
        cout << endl;

    return 0;
}
