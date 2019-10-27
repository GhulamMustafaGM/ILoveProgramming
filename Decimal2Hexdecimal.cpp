// Program: Decimal to Hexadecimal conversion  

#include<iostream>
using namespace std;

int main()
{
	long int deciNum, remember, quot;
	int a = 1, b, temp;
	char hexdeciNum[100];

	cout << "\nEnter any decimal number:";
	cin >> deciNum;
	quot = deciNum;

	while (quot != 0)
	{
		temp = quot % 16;
		
		if (temp < 10)
		{
			temp = temp + 48;
		}
		else
		{
			temp = temp + 55;
		}
		hexdeciNum[a++] = temp;
		quot = quot / 16;
	}
	cout << "Equvialent hexadecimal value of " << deciNum << " is :\n";
	for (b = a - 1; b > 0; b--)
	{
		cout << hexdeciNum[b];
	}
    cout << endl;

	return 0;
}