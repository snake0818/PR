#include <iostream>
using namespace std;
#ifndef Salary_h
#define Salary_h
class Salary
{
private:
	int hours, workDay;
public:
	Salary();
	Salary(int, int);
	void setHours(int);
	void setWorkDay(int);
	int getHours() const;
	int getWorkDay() const;
	int getMonthlySalary() const;
	void print();
};
#endif // !Salary_h