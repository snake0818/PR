#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include "StuCard.h"
using namespace std;

void print(const StuCard& stuCard)
{
	cout << stuCard.getName() << " " << stuCard.getSex();
	for (int i = 0; i < 3; i++)
	{
		cout << fixed << setprecision(1) << " " << stuCard.getScore(i);
	}
	cout << endl;
}

int main()
{
	ofstream output;
	string name[5] = { "Jerry" ,"John","Mary","Tom","Claire" };
	output.open("StuCard.txt");
	StuCard stuCard1(name[0], true, 80.0, 70.0, 90.0);
	StuCard stuCard2(name[1], true, 85.0, 77.0, 95.0);
	StuCard stuCard3(name[2], false, 83.0, 75.0, 70.0);
	StuCard stuCard4(name[3], true, 73.0, 95.0, 67.0);
	StuCard stuCard5(name[4], false, 88.0, 79.0, 71.0);
	StuCard stuCard[5] =
	{ stuCard1 ,stuCard2 ,stuCard3 ,stuCard4 ,stuCard5 };
	for (int i = 0; i < 5; i++)
	{
		stuCard[i].writeToFile(output);
	}
	output.close();

	StuCard NewStuCard[5];
	ifstream input;
	input.open("StuCard.txt");
	for (int i = 0; i < 5; i++)
	{
		NewStuCard[i].readFromFile(input);
		print(NewStuCard[i]);
	}
	input.close();
}