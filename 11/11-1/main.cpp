#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;
int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle R1(w1, h1);
	Rectangle R2(w2, h2);

	cout << fixed << setprecision(2) << "SwapByReference:" << R1.getArea() << " " << R2.getArea() << " to ";
	R1.swapByReference(R2);
	cout << fixed << setprecision(2) << R1.getArea() << " " << R2.getArea() << endl;

	cout << fixed << setprecision(2) << "SwapByPointer:" << R1.getArea() << " " << R2.getArea() << " to ";
	R1.swapByPointer(&R2);
	cout << fixed << setprecision(2) << R1.getArea() << " " << R2.getArea() << endl;

	return 0;
}