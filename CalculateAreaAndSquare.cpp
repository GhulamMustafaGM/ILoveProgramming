// CalcualteArea and PerimeterSquare

#include<iostream>
using namespace std;
int main()
{
	int side, perimeter, TotalArea;

	cout << "\nEnter length of a side of square: ";
	cin >> side;

	TotalArea = side * side;

	perimeter = 4 * side; 

	cout << "TotalArea = " << TotalArea << "\tPerimeter = " << perimeter << endl;


	return 0;
}