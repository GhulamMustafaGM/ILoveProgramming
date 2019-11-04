// Inventory Structures

#include <iostream> 

using namespace std; 

int main () 
{ 
      struct part 
    {
        int modelnumber; 
        int partnumber; 
        float cost; 
    };

    int main()
    {
        part part1; 
        part1.modelnumber = 6144; 
        part1.partnumber = 473;
        part1.cost = 215.55F;

        cout << "Model " << part1.modelnumber; 
        cout << ", part" << part1.partnumber;
        cout << ", costs $" << part1.cost << endl;

        return 0; 
    
}