#include <iostream>
#include <string>

using namespace std;

    int main()
    {
        string food = "Pizza";
        string* ptr = &food;

        cout << food << endl; 
        cout << &food << endl;  // Reference
        cout << *ptr << endl;   // Dereference

        *ptr = "Hamburger";

        cout << *ptr << endl;

        cout << food << endl;

    return 0;
}
