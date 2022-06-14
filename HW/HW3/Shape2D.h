#include "Shape.h"
#ifndef D2_H
#define D2_H

class Shape2D :public Shape
{
public:
	Shape2D();
	Shape2D(string, bool);
	virtual double getPerimeter();
	string toString();
};

#endif // !2D_H