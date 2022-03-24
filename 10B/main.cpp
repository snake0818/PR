#include <iostream>
#include "Staff.h"
#include "Birthday.h"
#include "Salary.h"
using namespace std;

int main() {
	Staff Staff1("Kirito", Birthday(2002, 3, 2), Salary(8, 20));
	Staff Staff2("Asuna", Birthday(2003, 5, 4), Salary(8, 30));
	Staff Staff3("Alice", Birthday(2000, 10, 8), Salary(3, 4));

	string n;
	int y, d, h;
	cin >> n >> y >> d >> h;
	Staff1.setName(n);

	Birthday b2 = Staff2.getBr();
	b2.setYear(y);
	Staff2.setBr(b2);

	Birthday b3 = Staff3.getBr();
	b3.setDay(d);
	Staff3.setBr(b3);

	Salary s1 = Staff1.getSa();
	s1.setHours(h);
	Staff1.setSa(s1);

	Salary s3 = Staff3.getSa();
	s3.setHours(h);
	Staff3.setSa(s3);

	Staff1.print();
	Staff2.print();
	Staff3.print();
	cout << "Staff: " << Staff3.getCount();

	return 0;
}