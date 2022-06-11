#include "Complex.h"

Complex::Complex()
{
}

Complex::Complex(int r, int v)
{
	Real = r;
	Virtual = v;
}

Complex Complex::add(const Complex& c2)
{
	int r = Real + c2.Real;
	int v = Virtual + c2.Virtual;
	return Complex(r, v);
}

Complex Complex::subtract(const Complex& c2)
{
	int r = Real - c2.Real;
	int v = Virtual - c2.Virtual;
	return Complex(r, v);
	return Complex();
}

Complex Complex::multiply(const Complex& c2)
{
	int r = Real * c2.Real - Virtual * c2.Virtual;
	int v = Real * c2.Virtual + Virtual * c2.Real;
	return Complex(r, v);
}

string Complex::toString()
{
	stringstream ss;
	ss << Real;
	if (Virtual >= 0)  ss << "+";
	ss << Virtual << "i" << endl;
	return ss.str();
}

Complex Complex::operator+()
{
	return Complex(abs(Real), abs(Virtual));
}

Complex Complex::operator-()
{
	return Complex(-Real, -Virtual);
}

Complex Complex::operator+(const Complex& c2)
{
	return add(c2);
}

Complex Complex::operator-(const Complex& c2)
{
	return subtract(c2);
}

Complex Complex::operator*(const Complex& c2)
{
	return multiply(c2);
}

int Complex::operator[](int index)
{
	return (index == 0) ? Real : Virtual;
}

Complex& Complex::operator+=(const Complex& c2)
{
	*this = add(c2);
	return *this;
}

Complex& Complex::operator-=(const Complex& c2)
{
	*this = subtract(c2);
	return *this;
}

Complex& Complex::operator*=(const Complex& c2)
{
	*this = multiply(c2);
	return *this;
}

Complex& Complex::operator++()
{
	this->Real++;
	return *this;
}

Complex& Complex::operator--()
{
	this->Real--;
	return *this;
}

Complex Complex::operator++(int n)
{
	Complex temp(Real, Virtual);
	Real++;
	return temp;
}

Complex Complex::operator--(int n)
{
	Complex temp(Real, Virtual);
	Real--;
	return temp;
}

ostream& operator<<(ostream& out, const Complex& c2)
{
	if (c2.Virtual < 0)
		out << c2.Real << "-" << c2.Virtual << "i";
	else
		out << c2.Real << "+" << c2.Virtual << "i";
	return out;
}

istream& operator>>(istream& in, Complex& c2)
{
	in >> c2.Real;
	in >> c2.Virtual;

	return in;
}
