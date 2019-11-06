// CodingC++.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "pch.h"

#include<iostream>
using namespace std;

int main()
{
	int s, h;

	double long n, m, a, sum, fact, third, first, second;
	
	cout << ends << ends << ends << ends << ends << ends << ends << ends << ends << ends << ends;
	cout << ends << ends << ends << ends << ends << ends << ends << ends << ends << ends << ends;
	cout << ends << ends << ends << ends << ends << "Welcome Program " << endl;
	
	cout << "(1) Table of given number." << endl;
	cout << "(2) Sum of natural number." << endl;
	cout << "(3) Factorial of a given number" << endl;
	cout << "(4) Fibonacci series." << endl;
	cout << "(5) Even or odd." << endl;
	cout << "(6) Square of agiven number." << endl;
	cout << "(7) Cube of a given number." << endl << endl;

	cout << "Enter your choice :" << ends;
	cin >> s;
	cout << endl;

	switch (s)
	{
	case 1:  cout << "Table of a given number" << endl;
		cout << "Enter a number " << ends;
		cin >> n;

		for (a = 1; a <= 10; a++)
		{
			m = n * a;
			cout << n << "*" << a << "=" << m << endl;
		}
		cout << "Thank you";
		break;

	case 2:  cout << "Sum of natural numbers" << endl;
		cout << "How many numbers ?" << ends;
		cin >> n;

		for (a = 1, sum = 0; a <= n; a++)
		{
			sum = sum + a;
			cout << a << endl;
		}
		cout << "Sum of " << n << " natural number is " << sum << endl;
		cout << "Thank you!!";
		break;

	case 3:
		cout << "Factorial of a given number" << endl;
		cin >> n;

		for (a = 1, fact = 1; a <= n; a++)

			fact = fact * a;
		cout << "factorial of " << n << " is" << ends << fact;
		cout << endl << "Thank you";

		break;

	case 4:
		cout << "Fibonacci series";
		cout << endl << "How many numbers ?" << ends;
		cin >> n;

		first = 0;
		second = 1;
		cout << endl << first << endl << second << endl;

		for (a = 2; a < n; a++)
		{
			third = first + second;

			first = second;
			second = third;

			cout << third << endl;
		}
		cout << endl << "Thank you!!" << endl;

		break;

	case 5:   cout << "Even or odd number" << endl;
		cout << "Enter a number to identify" << ends;
		cin >> h;
		if (h % 2 == 0)
			cout << "It is an even number";
		if (h % 2 != 0)
			cout << "It is an odd number";
		cout << endl << "Thank you";
		break;
	case 6:
		cout << "Square of agiven number";
		cout << endl << "Enter a number" << ends;
		cin >> n;
		cout << "The square of number" << n << " is " << n * n << endl;
		cout << "Thank you";
		break;
	case 7:
		cout << "Cube of a given number." << endl;
		cout << "Enter a number:" << ends;
		cin >> n;
		cout << "The cube of number" << n << " is " << n * n * n;
		break;
	default:

		cout << "Sorry! you entered a wrong choice.";

	}
	return 0;
}