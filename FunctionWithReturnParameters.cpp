// Function with returing value with parameters

#include<iostream>

using namespace std;

int GetLarger (int first, int second)

{
    int max;

    if (first > second)
    {
        max = first;
    }
    else
    {
        max = second;
    }
    return (max);
}
    int main()
{
    int First, Second;
    
    cout << "Enter FirstNumber: ";
    cin >> First;

    cout << "Enter SecondNumber: ";
    cin >> Second;

    cout << "Large digit: " << GetLarger(First, Second);
    cout << endl;

    return 0;
}
