#include "Rational.h"
#include <cstdlib>
#include <sstream>

int Rational::gcd(int a, int b)
{
	int n1 = abs(a);
	int n2 = abs(b);
	int gcd = 1;
	for (int k = 1; k <= n1 && k <= n2; k++) {
		if (n1 % k == 0 && n2 % k == 0) gcd = k;
	}
	return gcd;
}

Rational::Rational()
{
	numerator = 0;
	denominator = 1;
}

Rational::Rational(int numerator)
{
	this->numerator = numerator;
	denominator = 1;
}

Rational::Rational(int numerator, int denomintor)
{
	int factor = gcd(numerator, denomintor);
	this->numerator = ((denomintor > 0) ? 1 : -1) * numerator / factor;
	this->denominator = abs(denomintor) / factor;
}

int Rational::getNumerator() const
{
	return numerator;
}

int Rational::getDenomintor() const
{
	return denominator;
}

Rational Rational::add(const Rational& r2) const
{
	int n1 = numerator * r2.getDenomintor() + denominator * r2.getNumerator();
	int n2 = denominator * r2.getDenomintor();
	return Rational(n1, n2);
}

Rational Rational::subtract(const Rational& r2) const
{
	int n1 = numerator * r2.getDenomintor() - denominator * r2.getNumerator();
	int n2 = denominator * r2.getDenomintor();
	return Rational(n1, n2);
}

Rational Rational::multply(const Rational& r2) const
{
	int n1 = numerator * r2.getNumerator();
	int n2 = denominator * r2.getDenomintor();
	return Rational(n1, n2);
}

Rational Rational::divide(const Rational& r2) const
{
	int n1 = numerator * r2.getDenomintor();
	int n2 = denominator * r2.getNumerator();
	return Rational(n1, n2);
}

int Rational::compareTo(const Rational& r2) const
{
	Rational temp = subtract(r2);
	if (temp.getNumerator() < 0) return -1;
	else if (temp.getNumerator() == 0) return 0;
	else return 1;
}

bool Rational::equals(const Rational& r2) const
{
	if (compareTo(r2) == 0) return true;
	else return false;
}

int Rational::intValue() const
{
	return getNumerator() / getDenomintor();
}

double Rational::doubleValie() const
{
	return 1.0 * getNumerator() / getDenomintor();
}

string Rational::toString() const
{
	stringstream ss;
	ss << numerator;
	if (denominator > 1) ss << "/" << denominator;
	return ss.str();
}

Rational Rational::operator+(const Rational& r2)
{
	return add(r2);
}

Rational Rational::operator-()
{
	return Rational(-numerator, denominator);
}

Rational Rational::operator-(const Rational& r2)
{
	return subtract(r2);
}

Rational Rational::operator*(const Rational& r2)
{
	return multply(r2);
}

Rational Rational::operator/(const Rational& r2)
{
	return divide(r2);
}

bool Rational::operator<(const Rational& r2)
{
	return (compareTo(r2) < 0);
}

bool Rational::operator>(const Rational& r2)
{
	return (compareTo(r2) > 0);
}

int Rational::operator[](int index)
{
	return (index == 0) ? numerator : denominator;
}

Rational& Rational::operator+=(const Rational& r2)
{
	*this = add(r2);
	return *this;
}

Rational& Rational::operator-=(const Rational& r2)
{
	*this = subtract(r2);
	return *this;
}

Rational& Rational::operator*=(const Rational& r2)
{
	*this = multply(r2);
	return *this;
}

Rational& Rational::operator/=(const Rational& r2)
{
	*this = divide(r2);
	return *this;
}

Rational& Rational::operator==(const Rational& r2)
{
	return *this = (compareTo(r2) == 0);
}

Rational& Rational::operator!=(const Rational& r2)
{
	return *this = (compareTo(r2) != 0);
}

Rational& Rational::operator++()
{
	numerator += denominator;
	return *this;
}

Rational Rational::operator++(int n)
{
	Rational temp(numerator, denominator);
	numerator += denominator;
	return temp;
}

Rational& Rational::operator--()
{
	numerator -= denominator;
	return *this;
}

Rational Rational::operator--(int n)
{
	Rational temp(numerator, denominator);
	numerator -= denominator;
	return temp;
}

ostream& operator<<(ostream& out, const Rational& rational)
{
	if (rational.denominator == 1)
		out << rational.numerator;
	else
		out << rational.numerator << "/" << rational.denominator;
	return out;
}

istream& operator>>(istream& in, const Rational& rational)
{
	cout << "Enter numerator:";
	in >> rational.numerator;

	cout << "Enter denominator:";
	in >> rational.denominator;
}

Rational operator+(const Rational& r1, const Rational& r2)
{
	return r1.add(r2);
}

Rational operator-(const Rational& r1, const Rational& r2)
{
	return r1.subtract(r2);
}

Rational operator*(const Rational& r1, const Rational& r2)
{
	return r1.multply(r2);
}

Rational operator/(const Rational& r1, const Rational& r2)
{
	return r1.divide(r2);
}

bool operator<(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) < 0);
}

bool operator>(const Rational& r1, const Rational& r2)
{
	return (r2.compareTo(r1) < 0);
}

bool operator<=(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) <= 0);
}

bool operator>=(const Rational& r1, const Rational& r2)
{
	return (r2.compareTo(r1) <= 0);
}

bool operator==(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) == 0);
}

bool operator!=(const Rational& r1, const Rational& r2)
{
	return (r1.compareTo(r2) != 0);
}

