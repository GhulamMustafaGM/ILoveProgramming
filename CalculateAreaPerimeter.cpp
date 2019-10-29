// Calcualte area and perimeter Circle

#include<iostream>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double r;
    double p;
    double a;

   /*   r = radius;
        p = perimeter;
        a = area;
    */
    cout << "Enter the radious of the circle: ";
    cin >> r;

    p = 2 * PI * r;
    a = PI * PI * r;

    cout << "The radius is: " << r << endl;
    cout << "The perimeter is: " << p << endl;
    cout << "The are is: " << a << endl;

    return 0;
}