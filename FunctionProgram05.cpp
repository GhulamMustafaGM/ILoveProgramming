// Multiple Parameters Value
#include <iostream>
#include <string>
using namespace std;

void MeraFunction(string FirstName, int age)
    {
        cout << FirstName << " Son" << age << " year old. " << endl;
    }
    int main()
    {
        MeraFunction("Peter", 28);
        MeraFunction("John", 89);
        MeraFunction("Kicker", 90);
        MeraFunction("Ricky", 33);
        MeraFunction("Rock", 92);

    return 0;
    
    }
