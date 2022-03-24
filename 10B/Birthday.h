#include <iostream>
using namespace std;
#ifndef Birthday_h
#define Birthday_h
class Birthday
{
private:
	int year, month, day;
public:
	Birthday();
	Birthday(int, int, int);
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	int getMonth() const;
	int getDay() const;
	int getYear() const;
	void print();
};
#endif // !Birthday_h