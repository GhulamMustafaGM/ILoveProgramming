#include <iostream>
#include <string> 
using namespace std;

class House {
        public:
        void HouseType() {
            cout << "House is consist of five rooms \n";
        }
    };

    // Derived class
    class Villa: public House {
            public:
            void VillaType() {
                cout << "Villa is consist of fours rooms \n";
            }
    };

    class Building: public House {
        public:
        void BuildingType() {
            cout << "The building is consist of fifty rooms \n";
        } 
    };
int main()
{
    
    House myHome;

    Villa myVilla;
    Building myBuilding;
    
    myHome.HouseType();
    myVilla.VillaType();
    myBuilding.BuildingType();


    return 0;
}
