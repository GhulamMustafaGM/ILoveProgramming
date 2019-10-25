// UserAccount and after three transactions.

#include<iostream>
using namespace std;

int main()

{
    int UserBalance = 0;    // Variables declared
    int UserTransaction;

    cout << "Enter the first umber of the  UserTransaction: ";
    cin >> UserTransaction;
    UserBalance = UserBalance + UserTransaction;

    cout << "Enter the second number of the UserTransaction: ";
    cin >> UserTransaction;
    UserBalance = UserBalance + UserTransaction;

    cout << "Enter the third number of the UserTransaction: ";
    cin >> UserTransaction;
    UserBalance = UserBalance + UserTransaction;

    cout << "The total UserBalace is: " << UserBalance << " dollars. ";
    cout << endl;

    return 0;
}