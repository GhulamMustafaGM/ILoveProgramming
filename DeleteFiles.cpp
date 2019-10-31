// Delete Files

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int status;
	char fNme[25];
	cout<<"Enter name of file, you want to delete : ";
	gets(fName);

	status=remove(fName);
	if(status==0)
	{
		cout<<"file "<<fName<<" deleted successfully.!\n";
	}
	else
	{
		cout<<"Unable to delete file "<<fName<<"\n";
		perror("Error Message ");
	}
    cout << endl;
}
