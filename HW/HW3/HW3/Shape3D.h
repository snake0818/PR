#include "Shape2D.h"
#ifndef D3_H
#define D3_H

class Shape3D :public Shape2D
{
public:
	Shape3D();
	Shape3D(string, bool);
	virtual double getVolume();
	string toString();
};

#endif // !D3_H