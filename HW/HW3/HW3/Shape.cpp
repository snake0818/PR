#include "Shape.h"

Shape::Shape()
{
}

Shape::Shape(string Color, bool Filled)
{
    setColor(Color);
    setFilled(Filled);
}

void Shape::setColor(string Color)
{
    color = Color;
}

bool Shape::isFilled()
{
    return filled;
}

void Shape::setFilled(bool Filled)
{
    filled = Filled;
}

string Shape::getColor()
{
    return color;
}

double Shape::getArea()
{
    return 0.0;
}

string Shape::toString()
{
    return "Shape";
}
