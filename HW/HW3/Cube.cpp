#include "Cube.h"

Cube::Cube()
{
}

Cube::Cube(double s, string Color, bool Felled) :Shape3D(Color, Felled)
{
	setSide(s);
}

void Cube::setSide(double s)
{
	side = s;
}

double Cube::getSide()
{
	return side;
}

double Cube::getVolume()
{
	return (side * side * side);
}

double Cube::getArea()
{
	return (6 * side * side);
}

string Cube::toString()
{
	return "Cube";
}
