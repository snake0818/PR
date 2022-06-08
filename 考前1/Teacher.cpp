#include "Teacher.h"

Teacher::Teacher()
{
}

Teacher::Teacher(string n, int a, double s)
{
	name = n;
	age = a;
	score = s;
}

void Teacher::setName(string n)
{
	name = n;
}

void Teacher::setAge(int a)
{
	age = a;
}

void Teacher::setScore(double s)
{
	score = s;
}

string Teacher::getName() const
{
	return name;
}

int Teacher::getAge() const
{
	return age;
}

double Teacher::getScore() const
{
	return score;
}

void Teacher::writeToFile(ofstream& out)
{
	out << getName() << " " << getAge() << " " << getScore() << endl;
}

void Teacher::readFromFile(ifstream& in)
{
	in >> name >> age >> score;
}
