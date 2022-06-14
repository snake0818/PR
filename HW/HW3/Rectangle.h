#include "Shape2D.h"
#ifndef R_H
#define R_H

class Rectangle :public Shape2D
{
public:
	Rectangle();
	Rectangle(double, double, string, bool);
	void setWidth(double);
	void setHeight(double);
	double getWidth();
	double getHeight();
	double getPerimeter();
	double getArea();
	string toString();
private:
	double width;
	double height;
};

#endif // !R_H