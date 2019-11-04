// Inputs and outputs

#include <iostream>
#include <iomanip>
using namespace std;

int main()

{
    long pop1 = 2425733, pop2 = 247, pop3 = 9461, pop4 = 9461;;

    cout << setw(8) << "LOCATION" << setw(12)
         <<"POPULATION" << endl
         << setw(8) << "Portcity" << setw(12) << pop1 << endl
         << setw(8) << "Hightown" << setw(12) << pop2 << endl
         << setw(8) << "Lowville" << setw(12) << pop3 << endl
         << setw(8) << "Downtown" << setw(12) << pop4 << endl;


    return 0;
}
