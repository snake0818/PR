#include "Shape.h"

Shape::Shape()
{
}

Shape::Shape(string c)
{
	setColor(c);
}

void Shape::setColor(string c)
{
	color = c;
}

string Shape::getColor() const
{
	return color;
}

string Shape::toString() const
{
	return "Shape";
}
