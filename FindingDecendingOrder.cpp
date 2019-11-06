// Finding descending order numbers

#include<iostream>

using namespace std;


int main ()
{
    int numbers[10];
    int a, b, desc;

    cout<<"\nEnter 10 Numbers : \n";
    cout<<" ";

    for (a = 0; a < 10; ++a)
    cin>>numbers[a];

    for (a = 0; a < 10; ++a)   // for loop is sorting the numbers in descending order
    {
        for (b = a + 1; b < 10; ++b)
        {
            if (numbers[a] < numbers[b])
            {
                desc = numbers[a];
                numbers[a] = numbers[b];
                numbers[b] = desc;
            }
        }
    }
    cout<<"\nNumbers in Descending Order : \n";
    for (a = 0; a < 10; ++a)
    {
        cout<<" ";
        cout<<numbers[a];
        cout<<"\n";
    }
}
