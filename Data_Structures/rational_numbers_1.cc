#include <iostream>
#include <vector>
using namespace std;

struct Rational {
	int num, den;
};

int gcd(int a, int b) {

	if (a%b == 0) return b;
	return gcd(b, a%b);

}

Rational rational(int n, int d) {

	Rational r;
	r.num = n; r.den = d;
	int mcd = gcd(n,d);
	if (mcd != 1) {
		r.num = n/mcd;
		r.den = d/mcd;
	}
	if (r.den < 0) {

		r.num -= 2*(r.num);
		r.den -= 2*(r.den);
		
	}
	return r;
}
