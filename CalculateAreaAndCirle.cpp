// CalcualteArea and CicumferenceCircle

#include<iostream>
using namespace std;
int main()
{
	float radious, TotalArea, circum;

	cout << "\nEnter the radious of the circle: ";
	cin >> radious;

	TotalArea = 3.14*radious * radious;
	circum = 2 * 3.14* radious;

	cout << "Area of the circle = " << TotalArea << "\nCircumference of the circle = "
		<< circum << endl;


	return 0;
}