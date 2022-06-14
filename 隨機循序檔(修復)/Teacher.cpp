#include "Teacher.h"

Teacher::Teacher()
{
	for (int i = 0; i < 25; i++) name[i] = 0;
}

Teacher::Teacher(string n, int a, double s)
{
	for (int i = 0; i < 25; i++) name[i] = 0;
	setName(n);
	setAge(a);
	setScore(s);
}

void Teacher::setName(string& n)
{
	for (int i = 0; i < n.length(); i++)
	{
		name[i] = n[i];
	}
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
