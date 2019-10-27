// Program: Armstrong or Not

#include<iostream>
using namespace std;

int main()
{
	int n1, nu, number = 0, remember;

	cout << "\nEnter any positive number:";
	cin >> n1;
	nu = n1;

	while (nu != 0)
	{
		remember = nu % 10;
		number = number + remember * remember * remember;
		nu = nu / 10;
	}
		if (number == n1)
		{
			cout << "Armstrong number";
			cout << endl;
		}
		else
		{
			cout << "Not Armstrong number" << endl;
		}
		cout << endl;
	return 0;

}