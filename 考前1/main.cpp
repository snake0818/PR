#include <iostream>
#include <iomanip>
#include "Teacher.h"
using namespace std;
int main()
{
	Teacher t[4];
	string n;
	int a;
	double s;
	ofstream output;
	output.open("Teacher.txt");

	for (int i = 0; i < 4; i++)
	{
		cin >> n >> a >> s;
		t[i] = Teacher(n, a, s);
		t[i].writeToFile(output);
	}
	output.close();

	ifstream input;
	input.open("Teacher.txt");
	for (int i = 0; i < 4; i++)
	{
		t[i].readFromFile(input);
		cout << fixed << setprecision(1) << t[i].getName() << " " << t[i].getAge() << " " << t[i].getScore() << endl;
	}
	input.close();

}