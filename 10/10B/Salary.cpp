#include "Salary.h"
Salary::Salary() {}
Salary::Salary(int NH, int ND) {
	setWorkDay(ND);
	setHours(NH);	
}
void Salary::setHours(int NH) {
	hours = NH;
}
void Salary::setWorkDay(int ND) {
	workDay = ND;
}
int Salary::getHours() const {
	return hours;
}
int Salary::getWorkDay() const {
	return workDay;
}
int Salary::getMonthlySalary() const {
	return 168 * hours * workDay;
}
void Salary::print() {
	cout << getMonthlySalary();
}