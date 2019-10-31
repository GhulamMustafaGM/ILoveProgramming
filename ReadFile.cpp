// Read file

#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<fstream>

using namespace std;

int main()
{
    char c[15000];
    ifstream ifile;

    ifile.open("filename.txt");
    if(!ifile)
    {
        cout << "Error in opening file...";
        exit(1);
    }
    cout << "Data in file = ";

    while(ifile.eof() == 0)
    {
        ifile >> c;
        cout << c << " ";
    }
    ifile.close();
    
    cout << endl;
}