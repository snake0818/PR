#include <string>
using namespace std;
#ifndef T_H
#define T_H
class Teacher
{
public:
	Teacher();
	Teacher(string, int, double);
	void setName(string&);
	void setAge(int);
	void setScore(double);
	string getName() const;
	int getAge() const;
	double getScore() const;
private:
	char name[25];
	int age;
	double score;
};
#endif // !T_H