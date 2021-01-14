#include <iostream>
#include <vector>
using namespace std;

struct Fraction {
	int num, den; //always stricly positive
};

int gcd(int a, int b) {

	if (a%b == 0) return b;
	return gcd(b, a%b);

}

Fraction build_fraction(int n, int d) {

	Fraction r;
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

Fraction addition(const Fraction& x, const Fraction& y) {

	Fraction aux = build_fraction((x.num*y.den)+(y.num*x.den), x.den*y.den);
	return aux;

}

int main() {

	Fraction x;
	x.num = 0; x.den = 1;
	int n1, d1;
	char c1, c2;
	while (cin >> n1 >> c1 >> d1 >> c2) {
		Fraction f = build_fraction(n1, d1);
		x = addition(x, f);
	}
	cout << x.num << '/' << x.den << endl;

}
