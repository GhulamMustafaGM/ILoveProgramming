#include <iostream>
using namespace std;

class MeriClass
{

public:
    void MeraFunc(){
    cout << "This is multilevel class inheritance \n";
    }
};

class MeriClass2
{

public:
    void MeraFunc2(){
    cout << "This is multilevel class inheritance2\n";
    }
};

class MeraChild: public MeriClass {
};

class MeraGrandChild: public MeraChild, public MeriClass2 {

};

int main()
{
    MeraGrandChild meraObj;
    meraObj.MeraFunc();
    meraObj.MeraFunc2();

    return 0;
}
