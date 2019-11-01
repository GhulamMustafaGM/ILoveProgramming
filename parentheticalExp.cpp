// Parenthetical Expressions

#include<iostream>

using namespace std;

int main()
{
    int a = 4;

    cout << "Calculate with parenthes: " << (a + 3) *5 << endl;

    cout << "Calculate without: " << a + 3 * 5 << endl;
    cout << endl;

    // Without parentheses

    cout << "Calculate with parentheses: " << 12/(a + 2) <<endl;
    cout << "Calucate without parentheses: " << 12/ a +2;

    return 0;
}