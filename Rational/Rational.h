#ifndef R_H
#define R_H
#include <iostream>
#include <string>
using namespace std;
class Rational
{
public:
	Rational();
	Rational(int numerator);
	Rational(int numerator, int denominator);
	double doubleValie() const;
	int getNumerator() const;
	int getDenomintor() const;
	int intValue() const;
	int compareTo(const Rational& r2) const;
	bool equals(const Rational& r2) const;
	Rational add(const Rational& r2) const;
	Rational subtract(const Rational& r2) const;
	Rational multply(const Rational& r2) const;
	Rational divide(const Rational& r2) const;
	Rational operator-();
	int operator[](int index);
	Rational operator+(const Rational& r2);
	Rational operator-(const Rational& r2);
	Rational operator*(const Rational& r2);
	Rational operator/(const Rational& r2);
	Rational& operator+=(const Rational& r2);
	Rational& operator-=(const Rational& r2);
	Rational& operator*=(const Rational& r2);
	Rational& operator/=(const Rational& r2);
	Rational& operator==(const Rational& r2);
	Rational& operator!=(const Rational& r2);
	bool operator<(const Rational& r2);
	bool operator>(const Rational& r2);
	Rational& operator++();
	Rational operator++(int n);
	Rational& operator--();
	Rational operator--(int n);
	string toString() const;
private:
	int numerator;
	int denominator;
	static int gcd(int , int);
	friend ostream& operator<<(ostream& out, const Rational& rational);
	friend istream& operator>>(istream& in, const Rational& rational);
};
Rational operator+(const Rational& r1, const Rational& r2);
Rational operator-(const Rational& r1, const Rational& r2);
Rational operator*(const Rational& r1, const Rational& r2);
Rational operator/(const Rational& r1, const Rational& r2);
bool operator<(const Rational& r1, const Rational& r2);
bool operator>(const Rational& r1, const Rational& r2);
bool operator<=(const Rational& r1, const Rational& r2);
bool operator>=(const Rational& r1, const Rational& r2);
bool operator==(const Rational& r1, const Rational& r2);
bool operator!=(const Rational& r1, const Rational& r2);
#endif // !R_H