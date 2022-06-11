#include "Circle.h"

Circle::Circle()
{
	radius = 1;
}

Circle::Circle(double r, string Name, bool Filled) :Shape2D(Name, Filled)
{
	setRadius(r);
}

void Circle::setRadius(double r)
{
	radius = r;
}

double Circle::getRadius()
{
	return radius;
}

double Circle::getPerimeter()
{
	return (2 * 3.14159 * radius);
}

double Circle::getArea()
{
	return (3.14159 * radius * radius);
}

string Circle::toString()
{
	return string();
}
