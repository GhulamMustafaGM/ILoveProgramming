#include <iostream>
#include<string>
using namespace std;

class MeriCar {
    public:
    int CarSpeed(int MaxCarSpeed);
};

int MeriCar::CarSpeed(int MaxCarSpeed) {
    return MaxCarSpeed;
}

int main() {
    MeriCar CarObj;
    cout << CarObj.CarSpeed(150);
    return 0;
}
