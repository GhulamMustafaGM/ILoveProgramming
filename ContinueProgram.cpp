#include <iostream>
using namespace std;

int main()
{
    int a;

    for (a = 0; a < 10; a++)
    {
        if ( a == 5)
        {
            continue;
        }
        cout << a << endl;
    }

    return 0;
}
