// Print Prime Numbers 

#include<iostream>
using namespace std;

int main()
{
	int start, end, a, b, count = 0;
	
	
	cout << "Enter starting number: "; // user input
	cin >> start;

	cout << "Enter ending number: "; // user input 
	cin >> end;

	cout << "Prime number between " << start << " and " << end << " is:\n";
	for (a = start; a <= end; a++)
	{
		count = 0;
		for (b = 2; b < a; b++)
		{
			if (a % b == 0)
			{
				count++;
				break;
			}
		}
		if (count == 0)
		{
			cout << a << " ";
		}
	}
    cout << endl;
	return 0;
}

