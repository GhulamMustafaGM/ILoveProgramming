// Do While

#include <iostream>

using namespace std;

int main()
{
        long dividend, divisor;
    char ch;

    do 
    {   
        cout << "Enter dividend: "; cin >> dividend;
        cout << "Enter divisor: "; cin >> divisor;
        cout << "Quotient is " << dividend / divisor;
        cout << ", remaninder is " << dividend % divisor;

        cout << "\nDo another? (y/n): "; // do it again
        cin >> ch;
    }
         while ( ch != 'n'); 
         cout << endl;
        
         return 0;
}
