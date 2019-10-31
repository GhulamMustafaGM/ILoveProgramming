// Encrypt and Decrypt Files

#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
	char fName[25], ch, choice;
	fstream fps, fpt;
	
    cout<<"Enter file name (with extension like example.txt) to encrypt : ";
	gets(fName);
	fps.open(fName);
	if(!fps)
	{
		cout<<"Error in opening file!";
		cout<<"\nPress any key to exit...";
		exit(1);
	}
	fpt.open("temp.txt");
	if(!fpt)
	{
		cout<<"Error in creating temp.txt file!";
		fps.close();
		cout<<"\nPress any key to exit...";
		exit(2);
	}
	while(fps.eof()==0)
	{
		fps>>ch;
		ch=ch+100;
		fpt<<ch;
	}
	fps.close();
	fpt.close();
	fps.open(fName);
	if(!fps)
	{
		cout<<"Error in opening source file..!!";
		cout<<"\nPress any key to exit...";
		exit(3);
	}
	fpt.open("temp.txt");
	if(!fpt)
	{
		cout<<"Error in opening temp.txt file!";
		fps.close();
		cout<<"\nPress any key to exit...";
		exit(4);
	}
	while(fpt.eof()==0)
	{
		fpt>>ch;
		fps<<ch;
	}
	cout<<"File "<<fName<<" encrypted successfully..!!";
	cout<<"\nPress any key to exit...";
	fps.close();
	fpt.close();

    cout << endl;
}
