#include <iostream>
#include <vector>
using namespace std;

//Escriu el numero en qualsevol base
void write (int x, int b) {

	if (x != 0) {

		write(x/b, b);
		if (x % b >= 10) {

			cout << char(int('A') + ((x % b)-10));

		}

		else cout << x % b;
	}

}

//Decomposa el vector amb un vector que conte el numero de vegades que apareix cada nombre
vector<int> decompose (int x, int b) {

	vector<int> v(b,0);
	while (x != 0) {

		++v[x%b];
		x /= b;

	}

	return v;
}

//Diu si es un numero estable o no
bool is_stable (int x, int y, int b) {

	vector<int> x_dec = decompose(x, b);
	vector<int> y_dec = decompose(y, b);
	vector<int> total = decompose(x*y, b);
	
	bool stable = true;
	int i = 0;

	while (stable and i < b) {

		if (x_dec[i]+y_dec[i] != total[i]) stable = false;
		++i;
	}

	return stable;
}

int main() {

	int x, y;

	while (cin >> x >> y) {

		cout << "solutions for " << x << " and " << y << endl;
		int counter = 0;

		for (int b = 2; b < 17; ++b) {

			if (is_stable(x,y,b)) {

				write(x,b); cout << " * "; write(y,b); cout << " = "; write(x*y, b); cout << " (base " << b << ')' << endl;

			}

			else ++counter;
		}

		if (counter == 15) cout << "none of them" << endl;
		cout << endl;
	}
}
