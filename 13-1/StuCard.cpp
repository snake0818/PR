#include "StuCard.h"

StuCard::StuCard()
{
}

StuCard::StuCard(string& Name, bool Sex, double* ScoreAry)
{
	setName(Name);
	setSex(Sex);
	for (int i = 0; i < 3; i++)
	{
		setScore(i, ScoreAry[i]);
	}
}

StuCard::StuCard(string& Name, bool Sex, double a, double b, double c)
{
	double ScoreAry[3] = { a,b,c };
	setName(Name);
	setSex(Sex);
	for (int i = 0; i < 3; i++)
	{
		setScore(i, ScoreAry[i]);
	}
}

void StuCard::setName(string Name)
{
	name = Name;
}

void StuCard::setSex(bool Sex)
{
	sex = Sex;
}

void StuCard::setScore(int index, double Num)
{
	scoreAry[index] = Num;
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

void StuCard::writeToFile(ofstream& out)
{
	out << name << " " << sex;
	for (int i = 0; i < 3; i++)
	{
		out << " " << scoreAry[i];
	}
	out << endl;
}

void StuCard::readFromFile(ifstream& in)
{
	in >> name >> sex;
	for (int i = 0; i < 3; i++)
	{
		in >> scoreAry[i];
	}
}
