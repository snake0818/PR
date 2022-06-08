#include <iostream>
#include <string>
#include <iomanip>
#include "Shape.h"
#include "Cuboid.h"
#include "Sphere.h"

void display(Shape& s)
{
	Shape* p = &s;
	Sphere* p1 = dynamic_cast<Sphere*>(p);
	Cuboid* p2 = dynamic_cast<Cuboid*>(p);
	cout << fixed << setprecision(0);
	if (p1 != NULL)
	{
		cout << p1->toString() << ":";
		cout << "(" << p1->getRadius() << "),"
			<< fixed << setprecision(1) << p1->getVolume() << ",";
	}
	if (p2 != NULL)
	{
		cout << p2->toString() << ":";
		cout << "("
			<< p2->getLength() << "," << p2->getWidth() << "," << p2->getHeight() << "),"
			<< fixed << setprecision(1) << p2->getVolume() << ",";
	}
	cout << s.getColor() << endl;
}

int main()
{
	int r;
	string c1, c2;
	double l, w, h;
	cin >> r >> c1 >> l >> w >> h >> c2;
	Sphere sphere(r, c1);
	Cuboid cuboid(l, w, h, c2);

	display(sphere);
	display(cuboid);
}
