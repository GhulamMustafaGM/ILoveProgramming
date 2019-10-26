// Print InerChange Numbers 

#include<iostream>
using namespace std;

int main()
{
	int i, j, temp;

	cout << "Enter value of A and B :\n";
	cout << "A = ";
	cin >> i;
	cout << "B = ";
	cin >> j;

	temp = i; 
	i = j; 
	j = temp;

	cout << "Number interchanged successfully..! \n";
	cout << "A = " << i << "\n" << "B = " << j << endl;

	return 0;

}
