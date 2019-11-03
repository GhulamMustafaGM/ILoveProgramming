// Pointers access address variables

#include <iostream>

    using namespace std;

    int main()
    {
        int num1 = 12;  // two integer variables
        int num2 = 23;

        cout << &num1 << endl;  // print addresses of variables
        cout << &num2 << endl << endl; 
        
        
        int* ptr; // pointer to integers

        ptr = &num1; // pointer points to num1
        cout << ptr << endl;  // print contents of pointer (12)

        ptr = &num2;  // pointer points to num2

        cout << ptr << endl; // print contents of pointer (23)

        return 0;
    }