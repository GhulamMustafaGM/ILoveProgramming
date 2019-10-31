// Swap two strings

#include<iostream>
#include<cstdio>

using namespace std;

int main()
{

	int a=0, b=0;

  char strs1[25], strs2[25], temp[25];
  cout<<"Enter the First String : ";
  gets(strs1);

  cout<<"Enter the Second String : ";
  gets(strs2);

  cout<<"\nStrings before swapping are :" << endl;
  cout<<"String 1 = "<<strs1<<"\n";
  cout<<"String 2 = "<<strs2<<"\n";

  while(strs1[a]!='\0')
  {
	temp[b]=strs1[a];
	a++;
	b++;
  }
  temp[b]='\0';
  a=0, b=0;

  while(strs2[a]!='\0')
  {
	strs1[b] = strs2[a];
	a++;
	b++;
  }
  strs1[b]='\0';
  a=0, b=0;

  while(temp[a]!='\0')
  {
	strs2[b] = temp[a];
	a++;
	b++;
  }
  strs2[b]='\0';

  cout<<"\nStrings after swapping :" << endl;
  cout<<"String 1 = "<<strs1<<"\n";
  cout<<"String 2 = "<<strs2<<"\n";

    cout << endl;
}


