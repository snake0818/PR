#include "GeometricObject.h"

GeometricObject::GeometricObject()
{
}

GeometricObject::GeometricObject(string NC)
{
    setColor(NC);
}

void GeometricObject::setColor(string NC)
{
    color = NC;
}

string GeometricObject::getColor() const
{
    return color;
}

string GeometricObject::toString()
{
    return "GeometricObject";
}
