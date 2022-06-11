#include "Rectangle.h"

Rectangle::Rectangle()
{
}

Rectangle::Rectangle(double w, double h, string Color, bool Filled):Shape2D(Color,Filled)
{
	setWidth(w);
	setHeight(h);
}

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::setHeight(double h)
{
	height = h;
}

double Rectangle::getWidth()
{
	return width;
}

double Rectangle::getHeight()
{
	return height;
}

double Rectangle::getPerimeter()
{
	return (2 * (width + height));
}

double Rectangle::getArea()
{
	return (width * height);
}

string Rectangle::toString()
{
	return "Rectangle";
}
