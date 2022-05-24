#ifndef B_H
#define B_H
#include "GeometricObject.h"
#include <cmath>
class Ball :public GeometricObject
{
public:
	Ball();
	Ball(double, string);
	void setRadius(double);
	double getRadius()const;
	double getVolume()const;
	double getArea()const;
private:
	double radius;
};

#endif // !B_H