#ifndef Student_h
#define Student_h
#include <string>
#include "Course.h"
using namespace std;
class Student
{
private:
	string name;
	string ID;
	Course course;
	static int numOfStu;
	void setName(string);
	void setID(string);
	void setCourse(Course);
public:
	string getName() const;
	string getID() const;
	Course getCourse() const;
	int getNumOfStu() const;
	void printStudent();
	Student();
	Student(string, string, Course);
};
#endif // !Student_h