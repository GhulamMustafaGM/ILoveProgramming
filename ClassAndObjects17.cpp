#include <iostream>
using namespace std;

int main()
{
    try
    {
        
        int YourAge = 16;

        if (YourAge > 18)
            {
            cout << "Access granted - you are old enough. ";
            }
        else
                {
                throw (YourAge);
                }
    }   
        catch (int MeraNumber)
        {
            cout << "Access denied - You must be at least 18 years. \n";
            cout << "Age: " << MeraNumber;
        }
    
    return 0;
}
