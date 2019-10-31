// Read and Display File

#include<iostream>
#include<cstring>
#include<cstdlib>
#include<cstdio>
#include<fstream>

using namespace std;

int main()
{

    ifstream ifile;

	char str[120], fName[25];
	
    cout<<"Enter file name to read and display its content (like file.txt) : ";
	cin>>fName;

	ifile.open(fName);

	if(!ifile)
	{
		cout<<"Error in opening file...";
		exit(0);
	}
	while(ifile.eof()==0)
	{
        ifile>>str;
        cout<<str<<" ";
	}
	cout<<"\n";
	ifile.close();

    cout << endl;
}
