// Program: octal to binary conversion

#include<iostream>
using namespace std;
int main()
{
	long int a = 0;
	char octNum[1000];

	cout << "\nEnter any octal number: ";
	cin >> octNum;

	while(octNum [a])
	{
		switch (octNum[a])
		{
		case '0':cout << "000";
			break;
		case '1':cout << "001";
			break;
		case '2':cout << "010";
			break;
		case '3':cout << "011";
			break;
		case '4':cout << "100";
			break;
		case '5':cout << "101";
			break;
		case '6':cout << "110";
			break;
		case '7':cout << "111";
			break;
		default:cout << "\nInvalid octal digit " << octNum[a];
			break;
		}
		a++;
	}
    cout << endl;
    
	return 0;
}