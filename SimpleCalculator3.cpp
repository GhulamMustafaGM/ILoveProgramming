// SimpleCalculator3 Program

#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	int i, j, k;
    char ch, choice;

   do
	{
		cout << "1.Addition\n";
		cout << "2.Subtraction\n";
		cout << "3.Multiplication\n";
		cout << "4.Division\n";
		cout << "5.Exit\n\n";

		cout << "Enter any Choice :";
		cin >> choice;

		switch (choice)
		{

		case '1': cout << "Enter two numbers:";
			cin >> i >> j;
			k = i + j;
			cout << "Result = " << k << endl;
			break;

		case '2': cout << "Enter two numbers:";
			cin >> i >> j;
			k = i - j;
			cout << "Result = " << k << endl;
			break;

		case '3': cout << "Enter two numbers:";
			cin >> i >> j;
			k = i * j;
			cout << "Result = " << j << endl;
			break;

		case '4': cout << "Enter two numbers:";
			cin >> i >> j;
			k = i / j;
			cout << "Result = " << k << endl;
			break;

		case '5': exit(0);
			break;

		default: cout << "Wrong Choice...!" << endl;
			break;
		}
		cout << "\n.............................................\n";
	} while (choice != 5 && choice != getchar());

	return 0;
}