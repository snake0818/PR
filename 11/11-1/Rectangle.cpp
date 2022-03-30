#include "Rectangle.h"
void Rectangle::setWidth(double NW) {
	this->width = NW;
}
void Rectangle::setHeight(double NH) {
	this->height = NH;
}
double Rectangle::getWidth()const {
	return width;
}
double Rectangle::getHeight()const {
	return height;
}
double Rectangle::getArea()const {
	return getWidth() * getHeight();
}
void Rectangle::swapByReference(Rectangle& r2) {
	Rectangle t = r2;
	r2 = *this;
	*this = t;
}
void Rectangle::swapByPointer(Rectangle* r2) {
	Rectangle t = *r2;
	*r2 = *this;
	*this = t;
}
Rectangle::Rectangle(){
	width = 1;
	height = 1;
}
Rectangle::Rectangle(double NW, double NH) {
	setWidth(NW);
	setHeight(NH);
}