#include <iostream>
#include <string>
#include "Birthday.h"
#include "Salary.h"
using namespace std;
#ifndef Staff_h
#define Staff_h
class Staff
{
private:
	string name;
	Birthday birthday;
	Salary salary;
	static int time;
	static int count;
public:
	Staff();
	Staff(string, Birthday, Salary);
	void setName(string);
	void setBr(Birthday);
	void setSa(Salary);
	string getName() const;
	Birthday getBr() const;
	Salary getSa() const;
	int getTime() const;
	void print();
	int getCount();
};
#endif // !Staff_h