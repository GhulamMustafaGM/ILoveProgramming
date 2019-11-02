// Function with returing value without parameters

#include<iostream>

using namespace std;

int GetData ()

{
    int Data;

    do
    {
        cout << "Enter a positive value: ";
        cin >> Data;

    } while (Data <= 0);

}
    int main()
{
   int num = GetData(); // Function calling with no value

   cout << "The right-most integer: " << num % 10;

    return 0;
}
