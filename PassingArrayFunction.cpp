//  Passing Array to Function

#include<iostream>

using namespace std;

void PrintArray(int ArrayNum[5]);

int main()
{

    int ArrayNum1[5] = {12, 0, 20, 0, 34}; // Declare ArrayNumbers
    int ArrayNum2[5] = {5, 3, 12, 20, 35}; 
    // Traversing array
    PrintArray(ArrayNum1); // passing array to function 
    PrintArray(ArrayNum2);
} 

   void PrintArray(int ArrayNum[5])
{
       cout << "Printing array elements: \n";
       for (int a = 0; a < 5; a++)
       {
           cout << ArrayNum[a] << endl;
       }
       
}