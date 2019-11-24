#include <iostream>
using namespace std;

class MeriClass {
        public:
        int number1;
        private:
        int number2;
};

int main()
{
    MeriClass MeraObj;

    MeraObj.number1 = 20;   // allowed
    MeraObj.number2 = 30;   // Not allowed (Private)
    
    return 0;
}
