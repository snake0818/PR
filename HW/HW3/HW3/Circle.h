#include "Shape2D.h"

#ifndef Circle_H
#define Circle_H
class Circle :public Shape2D
{
public:
	Circle();
	Circle(double, string, bool);
	void setRadius(double);
	double getRadius();
	double getPerimeter();
	double getArea();
	string toString();
private:
	double radius;
};

#endif // !Circle_H