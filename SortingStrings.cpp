// Soring strings

#include<iostream>
using namespace std;
#include<cstring>

int main()
{
	char strs[6][25], t1[25];
	int b, a;

	cout<<"Enter any five string (name) : ";
	for(a=0; a<5; a++)
	{
		cin>>strs[a];
	}
	for(a=1; a<5; a++)
	{
		for(b=1; b<5; b++)
		{
			if(strcmp(strs[b-1], strs[b])>0)
			{
				strcpy(t1, strs[b-1]);
				strcpy(strs[b-1], strs[b]);
				strcpy(strs[b], t1);
			}
		}
	}
	cout<<"Strings (Names) in alphabetical order : \n";
	for(a=0; a<5; a++)
	{
		cout<<strs[a]<<"\n";
	}

	cout << endl;
}
