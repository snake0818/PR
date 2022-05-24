#include "GeometricObject.h"
#include "Cube.h"
#include "Ball.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displayGeometricObject(GeometricObject& g) {
	GeometricObject* p = &g;
	Ball* p1 = dynamic_cast<Ball*>(p);
	Cube* p2 = dynamic_cast<Cube*>(p);
	if (p1 != NULL) {
		cout << "Ball" << endl;
		cout << fixed << setprecision(1)
			<< "radius:" << p1->getRadius() << ", "
			<< "area:" << p1->getArea() << ", "
			<< "volume:" << p1->getVolume() << ", ";
	}
	if (p2 != NULL) {
		cout << "Cube" << endl;
		cout << fixed << setprecision(1)
			<< "length:" << p2->getLength() << ", "
			<< "area:" << p2->getArea() << ", "
			<< "volume:" << p2->getVolume() << ", ";
	}
	cout << "color:" << g.getColor() << endl;
}

int main() {
	double r, l;
	string s1, s2;
	cin >> r >> s1 >> l >> s2;

	Ball ball(r, s1);
	Cube cube(l, s2);

	displayGeometricObject(ball);
	displayGeometricObject(cube);
}