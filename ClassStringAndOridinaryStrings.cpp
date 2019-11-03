// Display convert between ordinary strings and class Strings

#include <iostream>
#include <cstring> // for strcpy(), strcat()
#include <string>


using namespace std;

class String //user-defined string type
{
private:
    enum { SIZE = 80 }; //size of all String objects
    char str[SIZE]; //holds a C-string
public:
        String() //no-arg constructor
        { str[0] = '\0'; }
        String( char s[] ) //1-arg constructor
        { strcpy(str, s); } // convert C-string to String
        void display() const //display the String
        { cout << str; }
        operator char*() //conversion operator
        { return str; } //convert String to C-string
};
    int main()
    {
        String s1;      // use no arg constructor
                        // create and initialize C-string
        char xstr[] = "Joyeux Noel!";

        s1 = xstr;      // use 1-arg constructor
                        // to convert C-string to string
        s1.display();  // display String

        String s2 = " Bonne Annee! "; // uses 1-arg constructor
                                    // to initialize String
        cout << static_cast<char*>(s2); // use conversion operator
        cout << endl;       // to convert String to C-string

        return 0;
    }
