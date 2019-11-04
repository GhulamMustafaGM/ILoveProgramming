// conditioinal operator

#include <iostream> 
#include<conio.h>

using namespace std; 

int main () 
{ 
    for (int  i = 0; i < 80; i++)
    {
        char ch = (i % 8) ? ' ' : 'x';
        cout << ch;
    }
    
    return 0; 
}