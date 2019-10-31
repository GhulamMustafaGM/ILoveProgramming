// Write Content File

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<fstream>

using namespace std;

int main()
{

    ofstream fp;

    char str[150], fName[25];

    cout << "Enter a fileName with extension like file.txt to create file";
    gets(fName);

    fp.open(fName);
    if(!fp)
    {
        cout << "Error in opening file...";
        exit(1);

    }
    cout<<"Enter few lines of text :\n";
	while(strlen(gets(str))>0)
	{
		fp<<str;
		fp<<"\n";
	}
	fp.close();

    cout << endl;
}
