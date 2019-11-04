// Finding Cube by using for loop 

#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int number, cube;

        for (number = 1; number <= 10; number++)
        {
            cout << setw(4) << number;

            cube = number * number * number;

            cout << " The number cube is : " << setw(6)<< cube;
            cout << endl;
        }

        cout << endl;

    return 0;
}
