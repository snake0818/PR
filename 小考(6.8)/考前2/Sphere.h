#ifndef SP_H
#define SP_H

#include "Shape.h"
class Sphere :public Shape
{
public:
	Sphere();
	Sphere(double, string);
	void setRadius(double);
	double getRadius()const;
	double getVolume()const;
	string toString()const;
private:
	double radius;
};

#endif // !SP_H