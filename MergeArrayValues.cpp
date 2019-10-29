// MergeArray Values
#include<iostream>

using namespace std;

int main()
{

    int a1[50], a2[50], s1, s2, s, a, b, c, merge[100];

    /*
        a1, a2 = array
        s1,s2,s = size
    */
	
    cout<<"Enter Array1 Size : ";
	cin>>s1;
	
    cout<<"Enter Array1 Elements : ";
	
    for(a = 0; a < s1; a++)
	{
		cin >> a1[a];
	}
	cout << "Enter Array2 Size : ";
	cin >> s2;
	cout<<"Enter Array2 Elements : ";

	for(a = 0; a < s2; a++)
	{
		cin >> a2[a];
	}
	for( a = 0; a < s1; a++)
	{
		merge[a] = a1[a];
	}
	s = s1 + s2;
	for(a = 0, c = s1; c <s && a<s2; a++, c++)
	{
		merge[c] = a2[a];
	}
	cout<<"Now the new array after merging is :\n";
	
    for(a=0; a<s; a++)
	{
		cout << merge[a]<<" ";
	}
	cout << endl;

    return 0;
}