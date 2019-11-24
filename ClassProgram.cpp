// classes and objects

#include <iostream>
#include <string>
using namespace std;

    class MeriClass {
        public:
        int MeraNum;
        string MeraString;
    };

int main()
{
    MeriClass MeraObj;  // create an object of MeriClass

    //access attributes and set values

    MeraObj.MeraNum = 20;
    MeraObj.MeraString = "This is classes and objects";

    // output elements

    cout << MeraObj.MeraNum << endl;
    cout << MeraObj.MeraString << endl;
    
    return 0;
}
