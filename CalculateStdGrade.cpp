// Calculate Students Grade

#include<iostream>
using namespace std;

int main()
{
    int mark[5], a;
	float total = 0, average;

	cout << "Enter marks achieved in 5 subjects:";
	
	for (a = 0; a < 5; a++)
	{
		cin >> mark[a];
		total = total + mark[a];
	}

	average = total / 5;
	cout << "Your grade is ";
	if (average > 80)
	{
		cout << "A";
	}
	else if (average > 60 && average <= 80)
	{
		cout << "B";
	}
	else if (average > 50 && average <= 60)
	{
		cout << "C";
	}
	else
	{
		cout << "D";
	}

    cout << endl;
    
	return 0;
}

