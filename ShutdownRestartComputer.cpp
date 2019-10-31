// Shutdown or Restart Computer in C++ Program

#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{

	int choice;

	cout<<"1. Shutdown Your Computer \n";
	cout<<"2. Restart Your Computer \n";
	cout<<"\n Enter your choice : ";

	cin>>choice;
	switch(choice)
	{
		case 1 : cout<<"System will be shutdown after 25 seconds \n";
				system("c:\\windows\\system32\\shutdown /s /t 25 \n\n");
				break;
		case 2 : cout<<"System will be restarted in 25 seconds\n";
				system("c:\\windows\\system32\\shutdown /r /t 25\n\n");
				break;
		default : cout<<"Oops! Wrong Choice!\n";
	}

}
