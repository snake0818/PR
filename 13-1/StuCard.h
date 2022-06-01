#include <string>
#include <fstream>
using namespace std;

#ifndef S_H
#define S_H

class StuCard
{
private:
	string name;
	bool sex;
	double scoreAry[3];
public:
	StuCard();
	StuCard(string&, bool, double*);
	StuCard(string&, bool, double, double, double);
	void setName(string);
	void setSex(bool);
	void setScore(int, double);
	string getName() const;
	bool getSex() const;
	double getScore(int) const;
	void writeToFile(ofstream&);
	void readFromFile(ifstream&);
};

#endif // !S_H