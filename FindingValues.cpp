// Searching the numbers of coins

#include<iostream>
using namespace std;

int main()

{
    const unsigned int PennyNum = 1;
    const unsigned int nickelNum = 5;
    const unsigned int dimeNum = 10;
    const unsigned int quarterNum = 25;
    const unsigned int dollarNum = 100; // Variabiles declarations

    unsigned int pens;  // Each coin defined
    unsigned int nickls;
    unsigned int dms;
    unsigned int quarts;
    unsigned int dollrs;

    unsigned long totalNum;

    cout << " Enter the number of pens: ";  // Usr input of each coin
    cin >> pens;

    cout << " Enter the number of nickls: ";
    cin >> nickls;

    cout << "Enter the number of dms: ";
    cin >> dms;

    cout << "Enter the number of quarts: ";
    cin >> quarts;

    cout << "Enter the number of dollrs: ";
    cin >> dollrs;

    totalNum = pens * PennyNum + nickls * nickelNum +       // Total results
    dms * dimeNum + quarts * quarterNum + dollrs * dollarNum;

     return 0;
}