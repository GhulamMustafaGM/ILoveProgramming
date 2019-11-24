#include <iostream>
#include <string>
using namespace std;

class MeriVehicle {
    private:
        public:
        string brand = "Hino";
        void Model() {
            cout << "GTS";
            cout << endl;
        }
};

class MeriCar: public MeriVehicle {
    public:
        string CarModel = "Toyota";
};

int main()
{
    MeriCar MeraObj;
    MeraObj.Model();
    cout << MeraObj.brand + " " + MeraObj.CarModel;

    return 0;
}
