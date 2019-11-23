#include <iostream>
#include <string>

using namespace std;

int main()
{
    string cars[5] = {"Scania", "Volvo", "Toyota"};
            cars[3] = "Mazda";
            cars[4] = "Tesla";

            for (int i = 0; i < 5; i++)
            {
                cout << cars[i] << endl;
            }
            
    
    return 0;
}
