#include "Ball.h"

Ball::Ball()
{
	radius = 1;
}

Ball::Ball(double r, string Name, bool Filled) :Shape3D(Name, Filled)
{
	setRadius(r);
}

void Ball::setRadius(double r)
{
	radius = r;
}

double Ball::getRadius()
{
	return radius;
}

double Ball::getVolume()
{
	return (4 * 3.14159 * radius * radius * radius) / 3.0;
}

double Ball::getArea()
{
	return (4 * 3.14159 * radius * radius);
}

string Ball::toString()
{
	return string();
}
