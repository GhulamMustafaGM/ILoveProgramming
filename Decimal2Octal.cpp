// Program: Decimal to Octal conversion  

#include<iostream>
using namespace std;

int main()
{
	long int deciNum, remember, quot;

	int a = 1, b, octNum[100];

	cout << "\nEnter any decimal number: ";
	cin >> deciNum;
	quot = deciNum;

	while (quot != 0)
	{
		octNum[a++] = quot % 8;
		quot = quot / 8;

	}
	cout << "Equivalent octal value of " << deciNum << " is: \n";
	
	for (b = a - 1; b > 0; b--)
	{
		cout << octNum[b];
	}
	cout << endl;

	return 0;
}