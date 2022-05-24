#ifndef C_H
#define C_H
#include "GeometricObject.h"
#include <cmath>
class Cube :public GeometricObject
{
public:
	Cube();
	Cube(double, string);
	void setLength(double);
	double getLength()const;
	double getVolume()const;
	double getArea()const;
private:
	double length;
};

#endif // !C_H