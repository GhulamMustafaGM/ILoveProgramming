// Hexadecimal to Decimal conversion 

#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

unsigned long convtodecnum(char hex[]);

int main()
{
	unsigned long deciNumber;
	char hexadeci[9]; // Declaration and initialization of 8 characters for 32-bit HexadecimalNumber and one for ' '

	cout << "\nEnter 32-bit Hexadecimal number: ";
	cin >> hexadeci;

	deciNumber = convtodecnum(hexadeci);
	cout << "Value in decimal number is " << deciNumber << endl;

}
unsigned long convtodecnum(char hexadeci[])
{
	char *hexstr;
	int length = 0;
	const int base = 16; // base of hexdecimal number
	unsigned long deciNumber = 0;
	int i;

	// Find the length of hexadecimalNumber
	for (hexstr = hexadeci; *hexstr != '\0'; hexstr++)
	{
	length++;
	}
	// Find HexadecimalNumber
	hexstr = hexadeci;
	for (i = 0; *hexstr != '\0' && i < length; i++, hexstr++)
	{
		// Compare *hexstr with ASCII values
		if (*hexstr >= 48 && *hexstr <= 57)   // *hexstr Between 0-9
		{
			deciNumber += (((int)(*hexstr)) - 48) * pow(base, length - i - 1);
		}
		else if ((*hexstr >= 65 && *hexstr <= 70))   // *hexstr Between A-F
		{
			deciNumber += (((int)(*hexstr)) - 55) * pow(base, length - i - 1);
		}
		else if (*hexstr >= 97 && *hexstr <= 102)   // *hexstr Between a-f
		{
			deciNumber += (((int)(*hexstr)) - 87) * pow(base, length - i - 1);
		}
		else
		{
			cout << "Invalid Hexadecimal Number. Try again! \n";

		}
	}
	return deciNumber;
}
