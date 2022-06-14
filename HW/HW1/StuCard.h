#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"
using namespace std;

#ifndef S_H
#define S_H

class StuCard
{
private:
	string name;
	bool sex;
	double scoreAry[3];
	Date birthday;
public:
	StuCard();
	StuCard(string, bool, double, double, double, Date);
	void setName(string);
	void setSex(bool);
	void setScore(int, double);
	void setDate(Date);
	string getName() const;
	bool getSex() const;
	double getScore(int) const;
	Date getDate() const;
	double average() const;
	int getAge(int) const;
	void printCard();
};

#endif // !S_H