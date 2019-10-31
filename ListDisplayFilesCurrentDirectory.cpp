// Merge Two Files

#include<iostream>
#include<dirent.h>

using namespace std;

int main()
{
    DIR *dir;
    dirent *pdir;
	
    cout<<"Press any key to list and view all the files in the current directory : \n";
	getch();
	
    dir=opendir(".");
	while(readdir(dir))
	{
		pdir=readdir(dir);
		cout<<pdir->d_name<<"\t";
	}
	closedir(dir);
    cout << endl;
}
