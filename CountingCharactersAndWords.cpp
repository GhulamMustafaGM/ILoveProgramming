// CountingCharacters and Words

#include <iostream> 
#include <conio.h> // for getche ()

using namespace std; 

int main () 
{ 
    int chcount = 0;
    int wdcount = 1; // space btewen two words
    char ch;
    while ( (ch = getche()) != '\r') 
    {
        if ( ch == ' ') // if it's a space
            wdcount++; // count a word
        else
            chcount++; // count a character
    }
    cout << "\nWords = " << wdcount << endl;
    cout << "Letters = " << chcount << endl;
    
    return 0; 
}