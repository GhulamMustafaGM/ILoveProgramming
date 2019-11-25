#include <iostream>
using namespace std;

int main()
{
    try
    {

        int YourAge = 15;

        if (YourAge > 18)
            {
            cout << "Access granted - you are old enough. ";
            }
        else
                {
                throw 505;
                }
    }
        catch ( ... )
        {
            cout << "Access denied - You must be at least 18 years. \n";
        }

    return 0;
}
