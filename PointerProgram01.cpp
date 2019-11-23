#include <iostream>
#include <string>

using namespace std;

    int main()
    {
        string food = "Pizza";
        string* ptr = &food;

        cout << &food << endl;  // Reference
        cout << *ptr << endl;   // Dereference

    return 0;
}
