#ifndef G_H
#define G_H
#include <string>
using namespace std;
class GeometricObject
{
public:
	GeometricObject();
	GeometricObject(string);
	void setColor(string);
	string getColor() const;
	virtual string toString();
private:
	string color;
};
#endif // !G_H