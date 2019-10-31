// Merge Two Files

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<fstream>

using namespace std;

int main()
{

   ifstream ifiles1, ifiles2;
	ofstream ifilet;

	char ch, fName1[25], fName2[25], fName3[35];

	cout<<"Enter first file name (with extension like example.txt) : ";
	gets(fName1);

	cout<<"Enter second file name (with extension like filname.txt) : ";
	gets(fName2);

	cout<<"Enter name of file (with extension like newfile.txt) which will store the contents of the two files (fName1 and fName1) : ";
	gets(fName3);
	
    ifiles1.open(fName1);
	ifiles2.open(fName2);

	if(ifiles1 ==NULL || ifiles2 ==NULL)
	{
		perror("Error Message ");
		cout<<"Press any key to exit...\n";
        exit(EXIT_FAILURE);
	}
	ifilet.open(fName3);
	if(!ifilet)
	{
		perror("Error Message ");
		cout<<"Press any key to exit...\n";
		exit(EXIT_FAILURE);
	}
	while(ifiles1.eof()==0)
	{
		ifiles1>>ch;
		ifilet<<ch;
	}
	while(ifiles2.eof()==0)
	{
		ifiles2>>ch;
		ifilet<<ch;
	}
	cout<<"The two files were merged into "<<fName3<<" file successfully..!";
	ifiles1.close();
	ifiles2.close();
	ifilet.close();

    cout << endl;
}
