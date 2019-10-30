// Print: DeleteString

#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
	char strs[25];
	int len, a, b;

	cout<<"Enter a string : ";
	cin >> strs;

	len=strlen(strs);

	for(a=0; a<len; a++)
	{
		if(strs[a]=='a' || strs[a]=='e' || strs[a]=='i' ||
		strs[a]=='o' || strs[a]=='u' || strs[a]=='A' ||
		strs[a]=='E' || strs[a]=='I' || strs[a]=='O' ||
		strs[a]=='U')
		{
			for(b=a; b<len; b++)
			{
				strs[b]=strs[b+1];
			}
		len--;
		}
	}
	cout<<"After deleting the vowels, the string will be : "<<strs;
    cout << endl;
    
    return 0;
}
