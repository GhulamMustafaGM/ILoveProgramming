// Passing Array to Function and find Maximum value

#include <iostream>  
using namespace std;  
void  printMax(int arr[5]);  
int main()  
{  
        int arr1[5] = { 25, 10, 54, 15, 40 };    
        int arr2[5] = { 12, 23, 44, 67, 54 };    
        printMax(arr1); //Passing array to function  
         printMax(arr2);   
}  
void  printMax(int arr[5])  
{  
    int max = arr[0];    
        for (int x = 0; x < 5; x++)    
        {    
            if (max < arr[x])    
            {    
                max = arr[x];    
            }    
        }    
        cout<< "Maximum element is: "<< max;
        cout << endl;    
}  