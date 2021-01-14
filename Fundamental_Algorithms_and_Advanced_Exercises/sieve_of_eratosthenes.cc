#include <iostream>
using namespace std;

int main() {

	int n;
	while (cin >> n) {

		bool prime = true;
		int i = 2;
		while (prime and i*i <= n) {
			if (n%i == 0) prime = false;
			++i;
		}
		if (prime and n > 1) cout << n << " is prime" << endl;
		else cout << n << " is not prime" << endl;
	}
}
