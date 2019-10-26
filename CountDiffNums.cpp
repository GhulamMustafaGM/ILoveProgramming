// positive, negative and zero numbers

#include<iostream>
using namespace std;

int main()
{
	int countp = 0, count = 0, countz = 0, arr[10], a;

	cout << "Enter 10 numbers:";
	for (a = 0; a < 10; a++)
	{
		cin >> arr[a];
	}
	for(a=0; a<10; a++)
		if (arr[a] < 0)
		{
			count++;
		}
		else if (arr[a] == 0)
		{
			countz++;
		}
		else
		{
			countp++;
		}
	cout << "Positive numbers = " << countp << endl;
	cout << "Negative numbers = " << count << endl;
	cout << "Zero = " << countz << endl;

	return 0;
}
