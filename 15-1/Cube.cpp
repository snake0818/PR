#include "Cube.h"

Cube::Cube()
{
    length = 1.0;
}

Cube::Cube(double NL, string color):GeometricObject(color)
{
    setLength(NL);
}

void Cube::setLength(double NL)
{
    length = NL;
}

double Cube::getLength() const
{
    return length;
}

double Cube::getVolume() const
{
    return pow(length, 3);
}

double Cube::getArea() const
{
    return 6 * pow(length, 2);
}
