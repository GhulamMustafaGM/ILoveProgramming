// classes and objects

#include <iostream>
#include <string>
using namespace std;

    class MeriCar {
        public:
        int CarYear;
        string CarBrand;
        string CarModel;
    };

int main()
{
    MeriCar CarObj1;  

    CarObj1.CarBrand = "Volvo";
    CarObj1.CarModel = "G5";
    CarObj1.CarYear = 2000;

    MeriCar CarObj2;
    CarObj2.CarBrand = "SAAB";
    CarObj2.CarModel = "T5";
    CarObj2.CarYear = 1990;

    cout << CarObj1.CarBrand << " " << CarObj1.CarModel << " " << CarObj1.CarYear << endl;
    cout << CarObj2.CarBrand << " " << CarObj2.CarModel << " " << CarObj2.CarYear << endl;
    
    return 0;
}
