#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cars[6];
            
            cars[0] = "Mazda";
            cars[1] = "Tesla";
            cars[2] = "Renalt";
            cars[3] = "Toyota";
            cars[4] = "BMW";
            cars[5] = "Volvo";

            for (int i = 0; i < 6; i++)
            {
                cout << cars[i] << endl;
            }
            
    return 0;
}
