// Centigrade to Fahrenheit counting 

#include<iostream>
using namespace std;
int main()
{
	float fahrenheit, celsius; // declared variables

	cout << "\nEnter temperature in Celsius: ";
	cin >> fahrenheit;

	fahrenheit = ( 1.8 * celsius) + 32;
	cout << "Temperature in Fahrenheit = " << fahrenheit;
	cout << endl;

	return 0;
}