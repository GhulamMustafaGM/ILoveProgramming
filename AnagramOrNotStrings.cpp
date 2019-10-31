// Angram or not strings

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{

    char strs1[25],strs2[25];

	int len,len1,len2,a,b,found=0,NotFound=0;

	cout<<"Enter first string :";
	gets(strs1);

	cout<<"Enter second string :";
	gets(strs2);

	len1=strlen(strs1);
	len2=strlen(strs2);

	if(len1==len2)
	{
		len=len1;
		for(a=0; a<len; a++)
		{
			found=0;
			for(b=0; b<len; b++)
			{
				if(strs1[a] == strs2[b])
				{
					found=1;
					break;
				}
			}
			if(found == 0)
			{
				NotFound = 1;
				break;
			}
		}
		if(NotFound == 1)
		{
			cout<<"Strings are not Anagram to each other";
		}
		else
		{
			cout<<"Strings are Anagram";
		}
	}
	else
	{
		cout<<"Two string must have same number of character to be Anagram";
	}
	
    cout << endl;
}


