#include "StuCard.h"

StuCard::StuCard()
{
}

StuCard::StuCard(string n, bool s, double s1, double s2, double s3, Date d)
{
	double sArr[3] = { s1,s2,s3 };
	setName(n);
	setSex(s);
	for (int i = 0; i < 3; i++)
	{
		setScore(i, sArr[i]);
	}
	setDate(d);
}

void StuCard::setName(string n)
{
	name = n;
}

void StuCard::setSex(bool s)
{
	sex = s;
}

void StuCard::setScore(int index, double s)
{
	scoreAry[index] = s;
}

void StuCard::setDate(Date d)
{
	birthday.setMonth(d.getMonth());
	birthday.setDay(d.getDay());
	birthday.setYear(d.getYear());
}

string StuCard::getName() const
{
	return name;
}

bool StuCard::getSex() const
{
	return sex;
}

double StuCard::getScore(int index) const
{
	return scoreAry[index];
}

Date StuCard::getDate() const
{
	return birthday;
}

double StuCard::average() const
{
	double ave = 0;
	for (int i = 0; i < 3; i++)
	{
		ave += scoreAry[i];
	}
	ave /= 3.0;

	return ave;
}

int StuCard::getAge(int y = 2020) const
{
	int age = y - birthday.getYear();
	return age;
}

void StuCard::printCard()
{
	cout << name << ", " << sex << ", ";
	for (int i = 0; i < 3; i++)
	{
		cout << fixed << setprecision(1) << getScore(i) << ", ";
	}
	cout << birthday.getMonth() << "/" << birthday.getDay() << "/" << birthday.getYear() << ", " << fixed << setprecision(1) << average() << ", " << getAge() << endl;
}
