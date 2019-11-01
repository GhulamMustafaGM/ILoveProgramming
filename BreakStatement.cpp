// Break statement inner loop program

#include <iostream>
using namespace std;

int main ()
{
   for (int b = 1; b <= 3; b++)
   {
       for (int c = 1; c <= 3; c++)
       {
           if (b==2 && c==2)
           {
            break;
           }
           cout << b << " " << c << endl;
       }

   }

}
