// Program: Binary to Decimal 

#include<iostream>
using namespace std;

int main()
{
	long int binaryNum, deciNum = 0, a = 1, remember;

	cout << "\nEnter any binary number:";
	cin >> binaryNum;

	while (binaryNum != 0)
	{
		remember = binaryNum % 10;
		deciNum = deciNum + remember * a;
		
        a = a * 2;
		binaryNum = binaryNum / 10;
	}
	cout << "Equivalent decimal value = " << deciNum;
	cout << endl;

	return 0;
}