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

void operation(Rational& r1, Rational& r2, string op) {

	Rational aux;
	if (op == "add") aux = rational((r1.num*r2.den)+(r2.num*r1.den), r1.den*r2.den);
	else if (op == "substract") aux = rational((r1.num*r2.den)-(r2.num*r1.den), r1.den*r2.den);
	else if (op == "multiply") aux = rational(r1.num*r2.num, r1.den*r2.den);
	else aux = rational(r1.num*r2.den, r1.den*r2.num); 
	r1 = aux;
}

int main() {

	int n, d;
	cin >> n >>d;
	string op;
	Rational r = rational(n, d);
	if (r.den == 1) cout << r.num << endl;
	else cout << r.num << '/' << r.den << endl;
	while(cin >> op) {

		int n1, n2;
		cin >> n1 >> n2;
		Rational r_op = rational(n1, n2);
		operation(r,r_op,op);
		if (r.den == 1) cout << r.num << endl;
		else cout << r.num << '/' << r.den << endl;
	}
}
