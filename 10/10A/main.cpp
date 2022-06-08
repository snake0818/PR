#include <iostream>
#include "Course.h"
#include "Student.h"
using namespace std;

void printAve(Student stuArray[]) {
	double MS = 0, ES = 0, CS = 0;
	int s = stuArray[0].getNumOfStu();
	for (int i = 0; i < s; i++) {
		MS += stuArray[i].getCourse().getMath();
		ES += stuArray[i].getCourse().getEnglish();
		CS += stuArray[i].getCourse().getComputer();
	}
	cout << "mathAverage:" << MS / s << endl;
	cout << "englishAverage:" << ES / s << endl;
	cout << "computerAverage:" << CS / s << endl;
}

int main() {
	const int maxsize = 5;
	int n, m, e, c;
	string name, id;
	cin >> n;
	Student s[maxsize];
	for (int i = 0; i < n; i++) {
		cin >> name >> id >> m >> e >> c;
		s[i] = Student(name, id, Course(m, e, c));
	}

	for (int i = 0; i < n; i++) {
		s[i].printStudent();
	}
	printAve(s);

	return 0;
}