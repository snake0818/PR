#ifndef C_H
#define C_H
#include "Shape.h"
class Cuboid :public Shape
{
public:
	Cuboid();
	Cuboid(double, double, double, string);
	void setLength(double);
	void setWidth(double);
	void setHeight(double);
	double getLength()const;
	double getWidth()const;
	double getHeight()const;
	double getVolume()const;
	string toString()const;
private:
	double length;
	double width;
	double height;
};

#endif // !C_H