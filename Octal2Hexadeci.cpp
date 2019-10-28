// Octal to Hexadecimal program

#include<iostream>
#include<cmath>
#include<cstring>

using namespace std;

int main()
{
	int a1[20], b1[20], c1[20], rev[20], h, i, j, k, l, x, fra, flag, remember, number1, number3;
		float remember1, number2, number4, dno;
		char sArray[20];

		x = fra = flag = remember = 0;
		remember1 = 0.0;

		cout << "\nEnter any octal number:";
		cin >> sArray;

		for (i = 0, j = 0, k = 0; i < strlen(sArray); i++)
		{
			if (sArray[i] == '.')
			{
				flag = 1;
			}
			else if (flag == 0)
			{
				a1[j++] = sArray[i] - 48;
			}
			else if (flag == 1)
			{
				b1[k++] = sArray[i] - 48;
			}
		}
		x = j;
		fra = k;
		for (j = 0, i = x - 1; j < x; j++, i--)
		{
			remember = remember + (a1[j] * pow(8, i));
		}
		for (k = 0, i = 1; k < fra; k++, i++)
		{
			remember1 = remember1 + (b1[k] / pow(8, i));
		}
		remember1 = remember + remember1;
		dno = remember1;
		number1 = (int)dno;
		number2 = dno - number1;

		i = 0;
		while (number1 != 0)
		{
			remember = number1 % 16;
			rev[i] = remember;
			number1 = number1 / 16;
			i++;
		}
		j = 0;
		while (number2 != 0.0)
		{
			number2 = number2 * 16;
			number3 = (int) number2;
			number4 = number2 - number3;
			number2 = number4;
			a1[j] = number3;
			j++;
			if (j == 4)
			{
				break;
			}
		}
		l = i;
		cout << "\nEquivalent Hexadecimal value = ";
		for (i = l - 1; i >= 0; i--)
		{
if (rev[i] == 10)
{
	cout << "A";
}
else if (rev[i] == 11)
{
	cout << "B";
}
else if (rev[i] == 12)
{
	cout << "C";
}
else if (rev[i] == 13)
{
	cout << "D";
}
else if (rev[i] == 14)
{
	cout << "E";
}
else if (rev[i] == 15)
{
	cout << "F";
}
else
{
	cout << rev[i];
}

		}
		h = j;
		cout << ".";
		for (k = 0; k < h; k++)
		{
			if (a1[k] == 10)
			{
				cout << "A";
			}
			else if (a1[k] == 11)
			{
				cout << "B";
			}
			else if (a1[k] == 12)
			{
				cout << "C";
			}
			else if (a1[k] == 13)
			{
				cout << "D";
			}
			else if (a1[k] == 14)
			{
				cout << "E";
			}
			else if (a1[k] == 15)
			{
				cout << "F";
			}
			else
			{
				cout << a1[k];
			}
		}
		return 0;
}