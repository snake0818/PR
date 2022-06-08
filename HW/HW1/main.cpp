#include <iostream>
#include <string>
#include <iomanip>
#include "StuCard.h"
#include "Date.h"
using namespace std;

double* classAver(StuCard arr[], int size)
{
	double* list = new double[3];
	for (int i = 0; i < 3; i++)
	{
		double sum = 0;
		for (int j = 0; j < size; j++)
		{
			sum += arr[j].getScore(i);
		}
		list[i] = sum / double(size);
	}
	return list;
}

int main()
{
	double* ave = { 0 };
	string name;
	bool sex;
	double n1, n2, n3;
	int m, d, y;
	cin >> name >> sex >> n1 >> n2 >> n3 >> m >> d >> y;

	StuCard s1("Jerry", true, 80.0, 70.0, 90.0, Date(3, 20, 1997));
	StuCard s2("John", true, 85.0, 77.0, 95.0, Date(5, 20, 1995));
	StuCard s3("Mary", false, 83.0, 75.0, 70.0, Date(2, 18, 2007));
	StuCard s4("Tom", true, 73.0, 95.0, 67.0, Date(11, 8, 2003));
	StuCard s5(name, sex, n1, n2, n3, Date(m, d, y));
	StuCard arr[5] = { s1,s2,s3,s4,s5 };
	
	for (int i = 0; i < 5; i++)
	{
		arr[i].printCard();
	}

	cout << "Average: ";
	ave = classAver(arr, 5);
	for (int i = 0; i < 3; i++)
	{
		cout << fixed << setprecision(1) << ave[i];
		if (i != 2) cout << ", ";
	}
	cout << endl;

}