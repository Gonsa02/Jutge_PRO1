#include <iostream>
using namespace std;

int which_number(int sum, int i) {

	int base = (sum/11)+1;
	bool divisible = false;

	while (not divisible) {

		if (((base*11) - sum) % i != 0) ++base;
		else divisible = true;

	}

	return (((base*11) - sum) / i);
}

int main() {

	char c;
	
	while (cin >> c) {

		int sum=0, position=0;
	
		for (int i = 10; i != 1; --i) {

			if (c != '?') {
			
				if (c != 'X') sum+= i*(int(c)-int('0'));
				else sum += i*10;

			}
			else position = i;
			cin >> c;
		}
		if (c != '?') {
			
			if (c != 'X') sum+= (int(c)-int('0'));
			else sum += 10;

		}
		else position = 1;

		if (sum % 11 == 0) cout << 0 << endl;
		else {

			int n = which_number(sum, position);

			if (n == 10) cout << 'X' << endl;
			else cout << n << endl;

		}
	}
}

