// Show Current date in C++

#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	time_t current = time(0);
	struct tm *ltm = localtime(&current);
	cout<<"Current system date is : "<<ltm->tm_mday<<"/"
	<<1 + ltm->tm_mon<<"/"<<1900 + ltm->tm_year;

    cout << endl;
}
