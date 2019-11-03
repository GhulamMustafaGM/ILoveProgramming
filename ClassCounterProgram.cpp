
#include <iostream>
#include <cstring> // for strcpy(), strcat()
#include <string>


    using namespace std;

    class CounterProgram       // base class
    {
    protected:          // not private
        unsigned int count; 
    public:
        CounterProgram() : count(0)    // no arg constructor
        {

        }
        CounterProgram( int c) : count(c)  // a-arg constructor
        {

        }
        unsigned int get_count() const  // return const
        {
            return count;
        }
        CounterProgram operator ++()
        {
           return CounterProgram  (++count);  // incr count (prefix)
        }
    };
    

    class CountDn : public CounterProgram  // derived class
    {
    public:
        CounterProgram operator --()   // decr count (prefix)
        {
            return CounterProgram (--count);
        }
    };

   

    int main()
    {
        CountDn c1;         // c1 of class CountDn

        cout << "\nc1=" << c1.get_count(); // display c1

        ++c1; ++c1; ++c1; // increment c1, 3 times
        cout << "\nc1=" << c1.get_count(); // display it

        --c1; --c1;         // decrement c1, twice
        cout << "\nc1=" << c1.get_count(); // display
        cout << endl;

        return 0;
    }