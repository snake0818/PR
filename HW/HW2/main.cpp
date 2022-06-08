#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
	Complex first = Complex(3, 4) + Complex(2, -4) * Complex(3, -1);
	Complex second = Complex(4, 3) - Complex(5, 6);
	cout << "first=" << first.toString();
	cout << "second=" << second.toString();
	cout << "++first=" << (++first).toString();
	cout << "--second=" << (--second).toString();
}