#ifndef Course_h
#define Course_h
#include <iostream>
#include <iomanip>
using namespace std;
class Course
{
private:
	int math;
	int english;
	int computer;
	void setMath(int);
	void setEnglish(int);
	void setComputer(int);
public:
	int getMath() const;
	int getComputer() const;
	int getEnglish() const;
	int getSum() const;
	double getAverage() const;
	void printScore();
	Course();
	Course(int, int, int);
};
#endif // !Course_h