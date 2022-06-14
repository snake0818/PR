#include "Shape3D.h"

Shape3D::Shape3D()
{
}

Shape3D::Shape3D(string Color, bool Filled) :Shape2D(Color, Filled)
{
}

double Shape3D::getVolume()
{
	return 0.0;
}

string Shape3D::toString()
{
	return "Shape3D";
}
