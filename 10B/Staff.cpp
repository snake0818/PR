#include "Staff.h"
int Staff::time = 0;
Staff::Staff() {}
Staff::Staff(string NN, Birthday NB, Salary NS) {
	setName(NN);
	setBr(NB);
	setSa(NS);
	time++;
}
void Staff::setName(string NN) {
	name = NN;
}
void Staff::setBr(Birthday NB) {
	birthday = NB;
}
void Staff::setSa(Salary NS) {
	salary = NS;
}
string Staff::getName() const {
	return name;
}
Birthday Staff::getBr() const {
	return birthday;
}
Salary Staff::getSa() const {
	return salary;
}
int Staff::getTime() const {
	return time;
}
void Staff::print() {
	cout<<getName();
	birthday.print();
	salary.print();
	cout << endl;
}
