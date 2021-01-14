#include <iostream>
using namespace std;

void binary(int x) {

	int b;

	b = x / 2;
	if (b != 0) binary(b);
	cout << x % 2;

}

void octal(int x) {

	int o;

	o = x / 8;
	if (o != 0) octal(o);
	cout << x % 8;

}

void hexa(int x) {

	int h;
	char c;

	h = x / 16;
	if (h != 0) hexa(h);
	if (x % 16 >= 10) {
		c = char(int('A') + ((x % 16)-10));
		cout << c;
	}
	else cout << x % 16;
}

int main() {
	
	int num;

	while (cin >> num) { 

		cout << num << " = ";

		binary(num);
		cout << ", ";

		octal(num);
		cout << ", ";

		hexa(num);
		cout << endl;
		
	}
}
