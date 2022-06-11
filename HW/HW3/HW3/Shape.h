#include <string>
using namespace std;
#ifndef S_H
#define S_H

class Shape
{
public:
	Shape();
	Shape(string, bool);
	void setColor(string);
	void setFilled(bool);
	bool isFilled();
	string getColor();
	virtual double getArea();
	virtual string toString();

private:
	string color;
	bool filled;
};

#endif // !S_H