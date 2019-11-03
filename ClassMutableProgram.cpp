// Class mutable program

#include <iostream>
#include <cstring> // for strcpy(), strcat()
#include <string>

using namespace std;

class scrollbar
    {
    private:
        int size;               // related to constness
        mutable string owner;   // not relevant to constness
    public:
        scrollbar(int sz, string own) : size(sz), owner(own)
        {

        }
        void setSize(int sz)    // changes size
        {
            size = sz;
        }
        void setOwner(string own) const // changes owner
        {
            owner = own;
        }
        int getSize() const     // returns size
        {
            return size;
        }
        string getOwner() const     // returns owner
        {
            return owner;
        }
    };

    int main()
    {
        const scrollbar sbar (60, "window1");

        // sbar.setSize(100)        //cant't do this to const obj
        sbar.setOwner("windows2");    // this is ok

        cout << sbar.getSize() << ", " << sbar.getOwner() << endl;
        
        return 0;
    }


