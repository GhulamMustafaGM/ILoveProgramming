// Generate ncr and npm 

#include<iostream>

using namespace std;

long int fact(int); //function declaration 

int main()
{
	int n, r;
	long int ncr, npr;

	cout << "\nEnter the value of n: ";
	cin >> n;

	cout << "Enter the value or r: ";
	cin >> r;

	npr = fact(n) / fact(n - r); //  function calling
	ncr = npr / fact(r); // function calling 

	cout << "NPR value = " << npr << "\n";
	cout << "NCR value = " << ncr << "\n";

}
long int fact(int c) // function definition 
{
	int a, b = 1;

	for (a = 2; a <= c; a++)
	{
		b = b * a;
	}

	return b;
}

