// Match Words

#include <iostream> 

using namespace std; 

int main () 
{ 
    int i, j, k;

    cout << "Enter three Values => i, j, k: ";
    cin >> i >> j >> k;

    if ( i == j)
    {
        if ( j == k)
        cout << "i, j, and k are the same ";
        cout << endl;
    }
    else
    {
        cout << "i and j are different " << endl;
    }
    
    return 0; 
}