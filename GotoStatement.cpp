//Goto statement program

#include <iostream>
using namespace std;

int main ()
{
    ineligible: 

        cout << "You are not eligible to vote!\n";

        cout << "Enter Age: \n";

        int Age;

        cin >> Age;

        if (Age < 18)
        {
            goto ineligible;
        }
              else 
              {
                  cout << "You are eligible to vote cast!";
              }
        cout << endl;
      
}
