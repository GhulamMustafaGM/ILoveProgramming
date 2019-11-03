// Constructors in derived class

#include <iostream>
#include <cstring> // for strcpy(), strcat()
#include <string>

    using namespace std;

    class CounterProgram
    {
    protected:                  // not private
        unsigned int count;         
    public:
       CounterProgram() : count() // constructor, no args
        {
        }
        CounterProgram(int c) : count(c) // constructor, one arg
        {

        }
        unsigned int get_count() const // return count
        {
            return count;
        }
        CounterProgram operator ++ ()  // incr count (prefix)
        {
            return CounterProgram(++count);
        }

    };

class CountDn : public CounterProgram
{
public:
    CountDn() : CounterProgram()       //constructor, no args
    {

    }
    CountDn(int c) : CounterProgram(c)     // constructor, 1 arg
    {

    }
    CountDn operator --()    // decrement count (prefix)
    {
        return CountDn(--count);
    }
};

int main()
{
    CountDn c1;
    CountDn c2(100);    // class CountDn

    cout << "\nc1=" <<c1.get_count();   
    cout << "\nc2=" <<c2.get_count();   //display

    ++c1; ++c1; ++c1;           // increment c1
    cout << "\nc1=" << c1.get_count(); // display it

    --c2; --c2;         //create c3 from c2
    cout << "\nc2=" << c2.get_count();   // display it

    CountDn c3 = --c2;  // create c3 from c2
    cout << "\nc3=" << c3.get_count(); // display c3

    cout << endl;

    return 0;

}

