// Days of week

#include<iostream>

using namespace std;

int main()
{
   int DayNumber;

   cout << "Enter DayNumber between 0 and 6: ";
   cin >> DayNumber;

   switch (DayNumber)
   {
        case 0: cout << "Sunday" << endl;
        case 1: cout << "Monday" << endl;
        case 2: cout << "Tuesday" << endl;
        case 3: cout << "Wednesday" << endl;
        case 4: cout << "Thursday" << endl;
        case 5: cout << "Friday" << endl;
        case 6: cout <<"Saturday" << endl;  

   }
    return 0;
}