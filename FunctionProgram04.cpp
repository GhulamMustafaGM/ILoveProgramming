// deafult Parameter Value
#include <iostream>
#include <string>
using namespace std;

void MeraFunction(string country = "Germany")
    {
        cout << country << endl;
    }
    int main()
    {
        MeraFunction("USA");
        MeraFunction("China");
        MeraFunction("Russia");
        MeraFunction();
        MeraFunction("France");

    return 0;
    
    }
