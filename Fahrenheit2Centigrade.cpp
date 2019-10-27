// Fahrenheit to centigrade conversion 

#include<iostream>
using namespace std;
int main()
{
	float fahrenheit, celsius; // declared variables

	cout << "\nEnter temperature in Fahrenheit:";
	cin >> fahrenheit;

	celsius = (fahrenheit - 32) / 1.8;
	cout << "Temperature in Celsius = " << celsius;
	cout << endl;
	
	return 0;
}