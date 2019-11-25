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
        catch (int MeraNumber)
        {
            cout << "Access denied - You must be at least 18 years. \n";
            cout << "Error Occurred: " << MeraNumber;
        }

    return 0;
}
