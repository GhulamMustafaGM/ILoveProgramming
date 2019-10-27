// Program: Decimal to Binary conversion  

#include<iostream>
using namespace std;

int main()
{
	long int deciNum, remeber, quot;
	int binaryNum[100], a = 1, b;

	cout << "Enter any decimal number :";
	cin >> deciNum;
	quot = deciNum;

	while (quot != 0)
	{
		binaryNum[a++] = quot % 2;
		quot = quot / 2;
	}
	cout << "Equivalent binary value of " << deciNum << " :\n";
	for (b = a-1; b > 0; b--)
	{
		cout << binaryNum[b];
	}
    cout << endl;

	return 0;
}