// StartPattern13

#include<iostream>
using namespace std;

int main()
{
	
	int a, b, c, number = 1, decre = 8, count = 0, temp;
	
	for (a = 0; a < 5; a++)
	{
		
		for (c = 0; c < decre; c++) // Print space
		{
			cout << " ";
		}

		for (b = 0; b < a; b++)
		{
			count++;
		}
		number = count;
		temp = number;

		for (b = 0; b < a; b++) // print numbers
		{
			cout << number-- << " "; // number is first printed, then decrement by 1
		}
		cout << "\n";
		number = temp;
		decre = decre - 2;
	}
    cout << endl;
    
	return 0;
}