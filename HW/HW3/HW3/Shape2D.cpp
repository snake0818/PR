#include "Shape2D.h"

Shape2D::Shape2D()
{
}

Shape2D::Shape2D(string Color, bool Filled) :Shape(Color, Filled)
{
}

double Shape2D::getPerimeter()
{
	return 0.0;
}

string Shape2D::toString()
{
	return "Shape2D";
}
