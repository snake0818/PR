#include "Sphere.h"

Sphere::Sphere()
{
}

Sphere::Sphere(double r, string color) :Shape(color)
{
	setRadius(r);
}

void Sphere::setRadius(double r)
{
	radius = r;
}

double Sphere::getRadius() const
{
	return radius;
}

double Sphere::getVolume() const
{
	return (4 * 3.14159 * radius * radius * radius) / 3;
}

string Sphere::toString() const
{
	return "Sphere";
}
