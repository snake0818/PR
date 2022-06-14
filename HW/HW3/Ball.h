#include "Shape3D.h"
#ifndef B_H
#define B_H

class Ball :public Shape3D
{
public:
	Ball();
	Ball(double, string, bool);
	void setRadius(double);
	double getRadius();
	double getVolume();
	double getArea();
	string toString();
private:
	double radius;
};

#endif // !B_H