// Formatting Program

#include<iostream>
#include<iomanip>
using namespace std;


int main()
{
	int a = 45;
	float b = 45.323;
	double c = 45.5468;
	int aa = a + 9;
	float bb = b + 9;
	double cc = c+9;
	int aaa = aa + 9;
	float bbb = bb + 9;
	double ccc = cc + 9;

	cout << "Print with set width = 10 \n";
	cout << "Int's" << setw(10);
	cout << "Float's" << setw(10);
	cout << "Double's" << setw(10) << "\n";

	cout << a; 
	cout << setw(10) << b;
	cout << setw(12) << c << endl;

	cout << aa;
	cout << setw(10) << bb;
	cout << setw(12) << cc << endl;

	cout << aaa;
	cout << setw(10) << bbb;
	cout << setw(12) << ccc <<endl;

	cout << "Print with tabs \n";
	cout << "Int" << "\tFloats" << "\tDoubles\n";
	cout << aaa << "\t" << bbb << "\t" << ccc << "\n";

	return 0;
}