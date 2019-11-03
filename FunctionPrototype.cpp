#include <iostream>

using namespace std;

// function protoype (delcaration)

int add (int, int)

int main()
{
	int num1, num2, sum;

	cout << "Enter two numbers to add.";
	cin >> num1 >> num2;

	// function call

	sum = add (num1, num2);
	cout << " Sum : " << sum;

	return 0;
}

{
int add(int a, int b)

	add = a + b;
	// return statement 

	return add;
}