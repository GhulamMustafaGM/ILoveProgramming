// Function with parameter

#include<iostream>

using namespace std;

void Desinging (int size)

{
    for (int a = 0; a < size; a++)
    {
        for (int b = 0; b < size; b++)
        {
            cout << "=";
        }
        cout << endl;
    }
    
    return;
}
    int main()
{
    int DesingingSize;    // argument pass to function
    
    do
    {
        cout << "Enter the size of Designing: ";
        cin >> DesingingSize;

    } while (DesingingSize <= 0);
    
    Desinging(DesingingSize);

    return 0;
}
