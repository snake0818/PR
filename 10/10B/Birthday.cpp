#include "Birthday.h"
Birthday::Birthday(){}
Birthday::Birthday(int NY, int NM, int ND) {
	setYear(NY);
	setMonth(NM);
	setDay(ND);
}
void Birthday::setMonth(int NM) {
	month = NM;
}
void Birthday::setDay(int ND) {
	day = ND;
}
void Birthday::setYear(int NY) {
	year = NY;
}
int Birthday::getMonth() const {
	return month;
}
int Birthday::getDay() const {
	return day;
}
int Birthday::getYear() const {
	return year;
}
void Birthday::print() {
	cout << " " << getYear() << "/" << getMonth() << "/" << getDay() << " ";
}