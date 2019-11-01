// Find pass or Not pass 

#include<iostream>
using namespace std;

using namespace std;

int main()
{
    char GradeScore;

    cout << "Enter GradeScore(A, B, C, D, F): ";
    cin >> GradeScore;

    switch (GradeScore)
    {
        case'A':
        case 'B':
        case 'C': cout << "Grade is pass";
        break;
        case 'D':
        case 'F': cout << "Grade is nopass";
        break;
        default: cout <<"Error in the input. Try again.";
    }
    return 0;
}