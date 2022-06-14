#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Teacher.h"
using namespace std;

int main()
{
	Teacher T[4];
	string n;
	int a;
	double s;

	fstream output("Teacher.bin", ios::out | ios::binary);
	for (int i = 0; i < 4; i++)
	{
		cin >> n >> a >> s;
		T[i] = Teacher(n, a, s);
		output.write(reinterpret_cast<char*>(&T[i]), sizeof(Teacher));
	}
	output.close();

	fstream input("Teacher.bin", ios::in | ios::binary);
	for (int i = 0; i < 4; i++)
	{
		input.read(reinterpret_cast<char*>(&T[i]), sizeof(Teacher));
		cout << T[i].getName() << " " << T[i].getAge() << " " << fixed << setprecision(1) << T[i].getScore() << endl;
	}
	input.close();
}