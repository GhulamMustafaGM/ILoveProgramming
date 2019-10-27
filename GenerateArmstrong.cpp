// Generate Armstrong numbers

#include<iostream>
using namespace std;

int main()
{
	int number1, number2, a, n1, remember, temp, count = 0;
		
	cout << "\nEnter Starting number:";
	cin >> number1;
	
    cout << "Enter Ending number:";
	cin >> number2;

	for (a = number1 + 1; a < number2; a++)
	{
		temp = a;
		n1 = 0;
		while (temp != 0)
		{
			remember = temp % 10;
			n1 = n1 + remember * remember * remember;
			temp = temp / 10;
		}
		if (a == n1)
		{
			if (count == 0)
			{
				cout << "Armstrong numbers between the given interval are "; 
				cout << endl; 
			}
			cout << a << " ";
			count++;
		}

	}
	if (count == 0)
	{
		cout << "Armstrong number not found between the given interval";
		cout << endl;
	}
    cout << endl;

	return 0;
}