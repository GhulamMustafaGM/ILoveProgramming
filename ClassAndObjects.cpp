// Class and its Objects

#include<iostream>
using namespace std;

class smallobj //define a class
{
private:
    int somedata;
public:
    void setdata(int d)
    {
        somedata = d;
    }
    void showdata() //member functin to display data
    {
        cout << "Data is " << somedata << endl;
    }
};

int main()
{
    smallobj s1, s2; // define tow objects of class smallobj
    s1.setdata(1066); //call member function to set data
    s2.setdata(1776);

    s1.showdata();   //call member function to display data
    s2. showdata ();
}
