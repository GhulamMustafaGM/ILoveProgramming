// Code to Decrypt Files

#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	char ch, choice, fName[20];
	fstream fps, fpt;

	cout<<"Enter file name (with extension like example.txt) which you have encrypted earlier to decrypt : ";
	gets(fName);

	fps.open(fName);
	if(!fps)
	{
		cout<<"Error in opening source file!";
		cout<<"\nPress any key to exit...";
		exit(7);
	}
	fpt.open("temp.txt");
	if(!fpt)
	{
		cout<<"Error in opening temp.txt file!";
		fps.close();
		cout<<"\nPress any key to exit...";
		exit(9);
	}
	while(fpt.eof()==0)
	{
		fpt>>ch;
		ch=ch-100;
		fps<<ch;
	}
	cout<<"File "<<fName<<" decrypted successfully!";
	cout<<"\nPress any key to exit...";
	fps.close();
	fpt.close();

    cout << endl;
}
