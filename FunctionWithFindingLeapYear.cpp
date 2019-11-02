// Function with finding leap year

#include<iostream>

using namespace std;

    int input ();
    bool Process (int yr);
    void output(int yr, bool result);

    int main()
{
    int yr = input ();
    bool result = Process(yr);
    output(yr, result);
}

int input()
{
    int yr;
    do
    {
        cout << "Enter the year after 1579: ";
        cin >> yr;

    } while (yr <= 1579);
    return yr;
}

bool Process(int yr)
{
    bool mula1 = (yr % 4 == 0);
    bool mula2 = (yr % 100 != 0) || (yr % 400 == 0);

    return (mula1) && (mula2);
}

void output (int yr, bool result)
{
    if (result)
    {
        cout <<"Year" << yr << " is leap year: ";
    }
    else
    {
        cout << "Year " << yr << " is not a leap year.";
    }

    cout << endl;

    return;
}
