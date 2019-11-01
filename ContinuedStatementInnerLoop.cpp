// Break statement inner loop program

#include <iostream>
using namespace std;

int main ()
{
   for (int a = 1; a <= 3; a++)
   {
       for (int b = 1; b <= 3; b++)
       {
           if (a==2 && b==2 )
           {
               continue;
           }
           cout << a << " " << b << endl;
       }
              
   }
      
}
