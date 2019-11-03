// Class of inheritance with employees and degrees
#include <iostream>

    using namespace std;

    const int LengthName = 80; // MaximumLength names

    class LiuStudent
    {
    private:
        char school[LengthName];   // name of school or university
        char degree[LengthName];   // highest degree earned
    public:
        void getEducation()
        {
            cout << "   Enter name of school or university: ";
            cin >> school;

            cout << "   Enter highest degree earned \n";
            cout << "   (Highscool, Bachelor's, Master's, PhD): ";
            cin >> degree;
        }
        void putEducation() const
        {
            cout << "\n     School or university: " << school;
            cout << "\n     Highest degree earned: " << degree;
        }
    };
    
    class employee
    {
    private:
        char name[LengthName];     
        unsigned long number;   
    public:
        void getData()
        {
            cout << "\n     Enter last name: "; cin >> name;
            cout << "       Enter number: "; cin >> number;
        }
        void putData() const
        {
            cout << "\n     Name: " << name;
            cout << "\n     Number: " << number;
        }
    };
 
    class manager : private employee, private LiuStudent  // University management
    {
    private:
        char title[LengthName];    // *vice-president" etc.
        double dues;        // golf club dues
    public:
        void getData()
        {
            employee::getData();

            cout << "  Enter title: ";  cin >> title;
            cout << "  Enter golf club dues: "; cin >> dues;

            LiuStudent::getEducation();
        }
        void putData() const
        {
            employee::putData();
            cout << "\n  Title: " << title;
            cout << "\n  Golf club dues: " << dues;

            LiuStudent::putEducation();
        }
    };
    //...
    class scientist : private employee, private LiuStudent // scientist
    {
    private:
        int pubs;   // number of publications
    public:
        void getData()
        {
            employee::getData();
            cout << "    Enter number of pubs: "; cin >> pubs;
            LiuStudent::getEducation();
        }
        void putData() const
        {
            employee::putData();
            cout << "\n   Number of publications: " << pubs;
            LiuStudent::putEducation();
        }
    };
    //.........
    class laborer : public employee
    {

    };
    //......
    int main()
    {
        manager m1;
        scientist s1, s2;
        laborer l1;

        cout << endl;

        cout << "\nEnter data for manager 1";  // get data for
        m1.getData();  // several employees

        cout << "\nEnter data for scientist 1";
        s1.getData();

        cout << "\nEnter data for scientist 2";
        s2.getData();

        cout << "\nEnter data for laborer 1";
        l1.getData();

        // display data for several employees

        cout << "\nData on manager 1";
        m1.putData();

        cout << "\nData on scientist 1";
        s1.putData();

        cout << "\nData on scientist 2";
        s2.putData();

        cout << "\nData on laborer 1";
        l1.putData();

        cout << endl;

        return 0;
    }
