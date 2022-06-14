#include "Shape3D.h"
#ifndef C_H
#define C_H
class Cube :public Shape3D
{
public:
	Cube();
	Cube(double, string, bool);
	void setSide(double);
	double getSide();
	double getVolume();
	double getArea();
	string toString();
private:
	double side;
};

#endif // !C_H