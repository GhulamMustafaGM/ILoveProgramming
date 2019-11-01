// Find student score 

#include<iostream>
using namespace std;

using namespace std;

int main()
{
    int mark1, mark2, mark3, maxScore, minScore, Score;

    cout << "Enter mark1: ";
    cin >> mark1;

    cout << "Enter mark2: ";
    cin >> mark2;

    cout << "Enter mark3: ";
    cin >> mark3;

    if (mark1 > mark2 && mark1 > mark3)
    {
        maxScore = mark1;
    }
    else if (mark2 > mark1 && mark2 > mark3)
    {
        maxScore = mark2;
    }
    else 
    {
        maxScore = mark3;
    }
    if (mark1 < mark2 && mark1 < mark3)
    {
        minScore = mark1;
    }
    else if( mark2 < mark1 && mark2 <= mark3)
    {
        minScore = mark2;
    }
    else 
    {
        minScore = mark3;
    }
    int temp = maxScore + minScore;
    if(temp % 2 == 1)
    {
        temp += 1;
    }
    Score = temp / 2;

    cout << "Scores: " << mark1 << " " << mark2 << " " << mark3 << endl; 
    cout << "minmum and maximum scores: ";
    cout << minScore << " " << maxScore << endl;
    cout << "Student Score: " << Score;
    cout << endl; 

    return 0;
}