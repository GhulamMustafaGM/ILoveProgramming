// Program: Octal to Binary 

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	long int octNum, deciNum = 0;
	int i = 0;

	cout << "\nEnter any octal number :";
	cin >> octNum;

	while (octNum != 0)
	{
		deciNum = deciNum + (octNum % 10) * pow(8, i);
		i++;
		octNum = octNum / 10;
	}
	cout << "Equivalent decimal value = " << deciNum;
    cout << endl;
    
	return 0;
}

