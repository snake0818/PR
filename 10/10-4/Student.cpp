#include "Student.h"

Student::Student()
{
}

Student::Student(string n, Date D, int s)
{
	setName(n);
	setDate(D);
	setScore(s);
}

void Student::setName(string n)
{
	name = n;
}

void Student::setDate(Date D)
{
	birthDay = D;
}

void Student::setScore(int s)
{
	score = s;
}

string Student::getName() const
{
	return name;
}

Date Student::getDate() const
{
	return birthDay;
}

int Student::getScore() const
{
	return score;
}

void Student::print()
{
	cout << name;
	birthDay.print();
	cout << score << endl;
}
