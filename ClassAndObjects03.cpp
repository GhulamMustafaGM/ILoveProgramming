
#include <iostream>
#include <string>
using namespace std;

    class MeriClass {
    public:
        void meraMethod(); 
    };

    void MeriClass::meraMethod() {

            cout << "Method or Function outside the class \n";
    }

int main()
{
    MeriClass meraObj;  
        
        meraObj.meraMethod();
        
    return 0;
}
