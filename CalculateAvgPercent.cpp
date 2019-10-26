// Calculate average and percentage of students marks

#include<iostream>
using namespace std;

int main()
{
    int mark[5], a;
    float total = 0;

    cout << "Enter marks gained in Physics, chemistry, Maths, CS, English :";

    for (a = 0; a < 5; a++)
    {
        cin >> mark[a];

        total = total + mark[a];
    }
    
    float avg = total / 5;
    float percent = (total / 500) * 100;

    cout << "Average Marks = " << avg;
    cout << "\nPercentage = " << percent << "%";
    cout << endl;

	return 0;
}