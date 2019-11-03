// Pointers access program 

#include <iostream>

    using namespace std;

    int main()
    {
        int num1 = 11;  // two integer variables
        int num2 = 22;

        int* ptr; // pointer to integers

        ptr = &num1; // pointer points to num1

        cout << *ptr << endl;  // print contents of pointer (11)

        ptr = &num2;  // pointer points to num2

        cout << *ptr << endl; // print contents of pointer (22)

        return 0;
    }