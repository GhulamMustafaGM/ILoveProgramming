// Hexadecimal to Octal

#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int hexTooct(char hexadeci[]);

int main()
{
	
	char hexadeci[20], z;
	int k;
	cout << "Enter Hexadecimal Number : ";
	cin >> hexadeci;
	cout << "Equivalent Octal Value = "<< hexTooct(hexadeci);
	
}
int hexTooct(char hexadeci[])
{
	int i, len, dec = 0, oct = 0;
	for (len = 0; hexadeci[len] != '\0'; len++);
	for (i = 0; hexadeci[i] != '\0'; i++, len--)
	{
		if (hexadeci[i] >= '0' && hexadeci[i] <= '9')
		{
			dec = dec + (hexadeci[i] - '0')*pow(16, len - 1);
		}
		if (hexadeci[i] >= 'A' && hexadeci[i] <= 'F')
		{
			dec = dec + (hexadeci[i] - 55)*pow(16, len - 1);
		}
		if (hexadeci[i] >= 'a' && hexadeci[i] <= 'f')
		{
			dec = dec + (hexadeci[i] - 87)*pow(16, len - 1);
		}
	} // decimal contains the decimal value and given hexadecimal number.
	i = 1;
	while (dec != 0)
	{
		oct = oct + (dec % 8)*i;
		dec = dec / 8;
		i = i * 10;
	}
	return oct;
}