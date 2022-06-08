#include "Cuboid.h"

Cuboid::Cuboid()
{
}

Cuboid::Cuboid(double l, double w, double h, string color) :Shape(color)
{
	setLength(l);
	setWidth(w);
	setHeight(h);
}

void Cuboid::setLength(double l)
{
	length = l;
}

void Cuboid::setWidth(double w)
{
	width = w;
}

void Cuboid::setHeight(double h)
{
	height = h;
}

double Cuboid::getLength() const
{
	return length;
}

double Cuboid::getWidth() const
{
	return width;
}

double Cuboid::getHeight() const
{
	return height;
}

double Cuboid::getVolume() const
{
	return length * width * height;
}

string Cuboid::toString() const
{
	return "Cuboid";
}
