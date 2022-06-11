#include <iostream>
#include <iomanip>
#include "Rectangle.h"
#include "Circle.h"
#include "Cube.h"
#include "Ball.h"
#include "Shape.h"

void display(Shape& s)
{
	Shape* p = &s;
	Circle* s1 = dynamic_cast<Circle*>(p);
	Rectangle* s2 = dynamic_cast<Rectangle*>(p);
	Ball* s3 = dynamic_cast<Ball*>(p);
	Cube* s4 = dynamic_cast<Cube*>(p);
	cout << fixed << setprecision(0);
	if (s1 != NULL)
	{
		cout << "circle, " << s1->getRadius();
	}
	if (s2 != NULL)
	{
		cout << "rectangle, " << s2->getWidth() << ", " << s2->getHeight();
	}
	if (s3 != NULL)
	{
		cout << "ball, " << s3->getRadius();
	}
	if (s4 != NULL)
	{
		cout << "cube, " << s4->getSide();
	}
	cout << ", " << s.getColor() << ", " << fixed << setprecision(2) << s.getArea() << endl;

}

bool equalArea(Shape& s1, Shape& s2)
{
	return s1.getArea() == s2.getArea();
}

bool equalPerimeter(Shape2D& s1, Shape2D& s2)
{
	return s1.getPerimeter() == s2.getPerimeter();
}

bool equalVolume(Shape3D& s1, Shape3D& s2)
{
	return s1.getVolume() == s2.getVolume();
}


int main()
{
	Circle circle(5, "yellow", 1);
	Rectangle rectangle(3, 4, "red", 0);
	Ball ball(5, "blue", 1);
	Cube cube(4, "black", 0);

	display(circle);
	display(rectangle);
	display(ball);
	display(cube);

	cout << "circle " << circle.getPerimeter()
		<< (equalPerimeter(circle, rectangle) ? " == " : " != ")
		<< "rectangle " << rectangle.getPerimeter() << endl;

	cout << "ball " << ball.getVolume()
		<< (equalVolume(ball, cube) ? " == " : " != ")
		<< "cube " << cube.getVolume() << endl;

}