// Program: Binary to Hexadecimal 

#include<iostream>
using namespace std;

int main()
{
	long int binaryNum, remember, quot;
	int a = 1, b, temp;
	char hexdeciNum[100];

	cout << "\nEnter any binary number: ";
	cin >> binaryNum;
	quot = binaryNum;

	while (quot != 0)
	{
		temp = quot % 16;
		 
		if (temp < 10)
		{
			temp = temp = 48;
		}
		else
		{
			temp = temp + 55;
		}
		hexdeciNum[a++] = temp;
		quot = quot / 16;
	}
	cout << "Equivalent hexadecimal value of " << binaryNum << " is: ";
	cout << endl;
	for (b = a - 1; b > 0; b--)
	{
		cout << hexdeciNum[b];
	}
	cout << endl;
    
	return 0;
}