// Calculate grade using Function

#include<iostream>
using namespace std;

int GetScore();
char FindGrade(int Score);
void PrintResult(int Score, char Grade);


int main()
{
    int Score;
    char Grade;

    Score = GetScore();
    Grade = FindGrade(Score);
    PrintResult(Score, Grade);

    return 0;
}

int GetScore()
{
    int Score;

    do
    {
        cout << "Enter score between 0 and 100: ";
        cin >> Score;

    } while (Score < 0 || Score > 100);
    return Score;

}

char FindGrade(int Score)
{
    char Grade;

    if (Score >= 90)
    {
        Grade = 'A';
    }
    else if (Score >= 80)
    {
        Grade = 'B';
    }
    else if (Score >= 70)
    {
        Grade = 'C';
    }
    else if (Score >= 60)
    {
        Grade = 'D';
    }
    else
    {
        Grade = 'F';
    }

    return Grade;
}

void PrintResult(int Score, char Grade)
{
    cout << endl << "Result of the test. " << endl;
    cout << "Score => " << Score << " out of 100 " << endl;
    cout << "Grade => " << Grade;
    cout << endl;
}
