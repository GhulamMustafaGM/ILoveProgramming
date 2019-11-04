// Finding Fibonacci Series

#include <iostream>

using namespace std;

int main()
{
       const unsigned long limit = 4294967295; // largest unsigned long
        unsigned long next = 0; // next-to-last term
        unsigned long last = 1; //last term

        while ( next < limit / 2 ) // do not let results get too big
    {
        cout << last << " "; // display last term
        long sum = next + last; // add last two terms

        next = last; // variables move forward
        last = sum; // in the series
    }
        cout << endl;

    return 0;
}
