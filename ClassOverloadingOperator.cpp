// Class overloaded '==' operator 

#include <iostream>
#include <cstring> // for strcpy(), strcat()

using namespace std;


class String        // user defined string type
    {
private:
        enum { sz = 80 }; // size of string objects
        char str[sz];    // holds a string
    public:
        String()        // constructor with no args
        {
            strcpy(str, " ");
        }
        String( char s[])    // constructor with one args
        {
            strcpy(str, s);
        }
        void getstr() // read a string
        {
            cin.get(str, sz);
        }
        bool operator == (String ss) const // check for equality
        {
            return (strcmp(str, ss.str) == 0) ? true : false;
        }
    };


    int main()
    {
        String s1 = "yes";
        String s2 = "no";
        String s3;

        cout << "\nEnter 'yes' or 'no': ";
        s3.getstr();                       // get String from user

        if ( s3 == s1 )
            cout << "You typed yes \n"; // compare with "yes"
        else if ( s3 == s2)
            cout << "You typed no \n";
        else
            cout << "You didn't follow instructions \n";

        return 0;
    }