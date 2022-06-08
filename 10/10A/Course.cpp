#include "Course.h"
void Course::setMath(int NM) {
	math = NM;
}
void Course::setEnglish(int NE) {
	english = NE;
}
void Course::setComputer(int NC) {
	computer = NC;
}
int Course::getMath() const {
	return math;
}
int Course::getComputer() const {
	return computer;
}
int Course::getEnglish() const {
	return english;
}
int Course::getSum() const {
	return getMath() + getComputer() + getEnglish();
}
double Course::getAverage() const {
	return getSum() / 3.0;
}
void Course::printScore() {
	cout << getMath() << " " << getEnglish() << " " << getComputer() << " " << "Sum:" << getSum() << " " << "Average:" << fixed << setprecision(1) << getAverage();
}
Course::Course() {

}
Course::Course(int NM, int NE, int NC) {
	setMath(NM);
	setEnglish(NE);
	setComputer(NC);
}