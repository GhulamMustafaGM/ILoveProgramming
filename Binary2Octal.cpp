// Program: Binary to Octal

#include<iostream>
using namespace std;

int main()
{
	long int binaryNum, remember, quot;
	int octNum[100], a = 1, b;

	cout << "\nEnter any binary number:";
	cin >> binaryNum;
	quot = binaryNum;
	while (quot != 0)
	{
		octNum[a++] = quot % 8;
		quot = quot / 8;
	}
	cout << "Equivalent octal value of " << binaryNum << " : " << endl;
	for (b = a - 1; b > 0; b--)
	{
		cout << octNum[b];
	}
    cout << endl;
	return 0;

}