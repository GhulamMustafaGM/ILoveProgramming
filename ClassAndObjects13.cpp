#include <iostream>
using namespace std;

class MeriClass
{

public:
    void MeraFunc(){
    cout << "This is multilevel class inheritance \n";
    }
};

class MeraChild: public MeriClass {
};

class MeraGrandChild: public MeraChild {

};

int main()
{
    MeraGrandChild meraObj;
    meraObj.MeraFunc();

    return 0;
}
