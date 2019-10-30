// Three Dimensional Array Programm

#include<iostream>
using namespace std;

int main()
{
	int ArrayNum[3][4][2] = {
			      {
				 {2, 4},
				 {7, 8},
				 {3, 4},
				 {5, 6}
			      },
			      {
				 {7, 6},
				 {3, 4},
				 {5, 3},
				 {2, 3}
			      },
			      {
				 {8, 9},
				 {7, 2},
				 {3, 4},
				 {5, 1}
			      }
			   };
	cout<<"ArrayNumber[0][0][0] = "<<ArrayNum[0][0][0]<<"\n";
	cout<<"ArrayNumber[0][2][1] = "<<ArrayNum[0][2][1]<<"\n";
	cout<<"ArrayNumber[2][3][1] = "<<ArrayNum[2][3][1]<<"\n";
	
    return 0;
}