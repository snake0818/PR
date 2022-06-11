#include <iostream>
#include <sstream>
#include <string>
using namespace std;
#ifndef C_H
#define C_H

class Complex
{
public:
	Complex();
	Complex(int, int);
	Complex add(const Complex&);
	Complex subtract(const Complex&);
	Complex multiply(const Complex&);
	string toString();
	Complex operator+();
	Complex operator-();
	Complex operator+(const Complex&);
	Complex operator-(const Complex&);
	Complex operator*(const Complex&);
	int operator[](int);
	Complex& operator+=(const Complex&);
	Complex& operator-=(const Complex&);
	Complex& operator*=(const Complex&);
	Complex& operator++();
	Complex& operator--();
	Complex operator++(int);
	Complex operator--(int);
private:
	int Real, Virtual;
	friend ostream& operator<<(ostream& out, const Complex&);
	friend istream& operator>>(istream& in, Complex&);
};

#endif // !C_H