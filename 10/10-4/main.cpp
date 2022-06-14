#include <iostream>
#include <string>
#include "Student.h"
#include "Date.h"
using namespace std;
int main()
{
	string n;
	int m = 0, d = 0, y = 0;
	cin >> n >> m >> d >> y;
	Student student1("John", Date(6, 1, 1999), 90)
		, student2("Marry", Date(10, 8, 1997), 80);

	student1.setName(n);
	student2.setDate(Date(m, d, y));

	student1.print();
	student2.print();

	return 0;
}