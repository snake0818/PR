#include <iostream>
using namespace std;
#ifndef D_H
#define D_H
class Date
{
public:
	Date();
	Date(int, int, int);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	void print();
private:
	int  month, day, year;
};
#endif // !D_H