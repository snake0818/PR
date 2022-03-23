#include "Student.h"
int Student::numOfStu = 0;
void Student::setName(string NN) {
	name = NN;
}
void Student::setID(string NID) {
	ID = NID;
}
void Student::setCourse(Course NC) {
	course = NC;
}
string Student::getName() const {
	return name;
}
string Student::getID() const {
	return ID;
}
Course Student::getCourse() const {
	return course;
}
int Student::getNumOfStu() const {
	return numOfStu;
}
void Student::printStudent() {
	cout << getName() << " " << getID();
	course.printScore();
	cout << endl;
}
Student::Student() {
}
Student::Student(string NN, string NID, Course NC) {
	setName (NN);
	setID (NID);
	setCourse(NC);
	numOfStu++;
}