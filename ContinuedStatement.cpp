// Break statement inner loop program

#include <iostream>
using namespace std;

int main ()
{
   for (int i = 2; i <= 10; i++)
   {
       if (i == 5)
       {
           continue;
       }
       cout << i << endl;
   }
   
}
