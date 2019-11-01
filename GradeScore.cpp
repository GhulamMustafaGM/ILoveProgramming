// GradeScore and Grade

#include<iostream>

using namespace std;

int main()
{
    int GradeScore;
    char Grade;

    cout << "Enter GradeScore between 0 and 100: ";
    cin >> GradeScore;

    switch (GradeScore / 10)
    {
        case 10: Grade = 'A';
            break;
        case 9 : Grade = 'A';
            break;
        case 8 : Grade = 'B';
            break;
        case 7 : Grade = 'C';
            break;
        case 6 : Grade = 'D';
            break;
        default: Grade = 'F';
        }

        cout << "GradeScore: " << GradeScore << endl;
        cout << "GradeScore: " << Grade << endl;

    return 0;
}
