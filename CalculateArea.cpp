// CalcualteArea and PerimeterRectangle

#include<iostream>
using namespace std;

int main()
{
	int length, breadth, perimeter, TotalArea;

	cout << "\nEnter length and breadth of the rectangle: ";
	cin >> length >> breadth;

	TotalArea = length * breadth;
	perimeter = (2 * length) + (2 * breadth);

	cout << "TotalArea = " << TotalArea << "\tPerimeter = " << perimeter;
	cout << endl;

	return 0;
}