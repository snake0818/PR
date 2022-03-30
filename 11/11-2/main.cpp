#include <iostream>
#include <iomanip>
#include "Rectangle.h"
using namespace std;
void swapByReference(Rectangle& r1, Rectangle& r2) {
	Rectangle t = r1;
	r1 = r2;
	r2 = t;
}
void swapByPointer(Rectangle* r1, Rectangle* r2) {
	Rectangle t = *r1;
	*r1 = *r2;
	*r2 = t;
}

int main()
{
	double w1, h1, w2, h2;
	cin >> w1 >> h1 >> w2 >> h2;
	Rectangle R1(w1, h1);
	Rectangle R2(w2, h2);

	cout << fixed << setprecision(2) << "SwapByReference:" << R1.getArea() << " " << R2.getArea() << " to ";
	swapByReference(R1, R2);
	cout << fixed << setprecision(2) << R1.getArea() << " " << R2.getArea() << endl;

	cout << fixed << setprecision(2) << "SwapByPointer:" << R1.getArea() << " " << R2.getArea() << " to ";
	swapByPointer(&R1, &R2);
	cout << fixed << setprecision(2) << R1.getArea() << " " << R2.getArea() << endl;

	return 0;
}