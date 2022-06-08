#include <string>
using namespace std;
#ifndef S_H
#define S_H

class Shape
{
public:
	Shape();
	Shape(string);
	void setColor(string);
	string getColor()const;
	virtual string toString()const;
private:
	string color;
};

#endif // !S_H