#include <iostream>
#include <string>
class Solution {
  public:
    int Solution(int a) {

        return 3 + a;
    }


    int returnMagicNumber(int b) {

      return 4-b;
    }
};

int main()
{
    cout << "Magic number: " << Solution(3);
    cout << "\nReturned number: " << returnMagicNumber(2);

    return 0;
}
