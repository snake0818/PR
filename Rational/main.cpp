#include <iostream>
#include "Rational.h"
using namespace std;
int main() {
	Rational r1(2, 3);
	Rational r2(5, 7);
	Rational r3(3, 5);
	Rational r4(7, 2);
	Rational r5(5, 6);
	Rational r6(5, 7);

	Rational first = r1 + (r2 * r3);
	Rational second = ((r4 - r5) / r6);
	cout << "first=" << first << endl;
	cout << "second=" << second << endl;
	cout << "++first=" << ++first << endl;
	cout << "--second=" << --second << endl;
	(first.compareTo(second) ? cout << first << "<" << second << endl : cout << first << ">" << second << endl);

}