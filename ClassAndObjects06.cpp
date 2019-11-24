#include <iostream>
#include<string>
using namespace std;

class MeriCar {
    public:
        string CarBrand;
        string CarModel;
        int CarYear;
        MeriCar(string a, string b, int c) {

            CarBrand = a;
            CarModel = b;
            CarYear = c;

        }

};

int main() {

    MeriCar meraObj1("Volvo", "DX", 2010);
    MeriCar meraObj2("SAAB", "GX", 2001);

    cout <<meraObj1.CarBrand << " " << meraObj1.CarModel << " " << meraObj1.CarYear << endl;
    cout <<meraObj2.CarBrand << " " << meraObj2.CarModel << " " << meraObj2.CarYear << endl;

    return 0;
}
