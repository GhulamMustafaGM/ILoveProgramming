//Write programme to check Leap Year or Not

#include<iostream>
using namespace std;

int main()
{
	int CheckYear;

	cout << "\nEnter any year: ";
	cin >> CheckYear;

	if ((CheckYear % 4 == 0) && (CheckYear % 100 != 0))
	    {
		cout << "Great! This is a Leap Year." << endl;
	    }
	else if ((CheckYear % 100 == 0) && (CheckYear % 400 == 0))
	    {
		cout << "Great! This is a Leap Year." << endl;
	    }
	else if (CheckYear % 400 == 0)
	    {
		cout << "Great! This is a Leap Year." << endl;
	    }
	else
    	{
		cout << "Sorry! This is not a Leap Year." << endl;
	    }
	return 0;
}