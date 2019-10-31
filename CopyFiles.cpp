// Copy Files

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<fstream>

using namespace std;

int main()
{

    ofstream ft;
    ifstream fs;

	char ch, fName1[25], fName2[25];

	cout<<"Enter source file name with extension (like example.txt) : ";
	gets(fName1);

	fs.open(fName1);
	if(!fs)
	{
		cout<<"Error in opening source file!";
		exit(1);
	}
	cout<<"Enter target file name with extension (like filename.txt) : ";
	gets(fName2);
	ft.open(fName2);

	if(!ft)
	{
		cout<<"Error in opening target file!";
		fs.close();
		exit(2);
	}
	while(fs.eof()==0)
	{
		fs>>ch;
		ft<<ch;
	}
	cout<<"File copied successfully..!!";
	fs.close();
	ft.close();

    cout << endl;
}
