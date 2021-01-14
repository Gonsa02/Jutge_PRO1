#include <iostream>
using namespace std;

int number_of_digits(int n) {

	if (n < 10) return 1;
	return 1 + number_of_digits(n/10);
}

int main() {
	int n, times;
	cin >> n >> times;
	int digits = number_of_digits(n);
	int first_row = 2*times*digits + (2*times -1) - 2*digits;
	for (int i = 0; i < times; ++i) {
		bool first = true;
		for (int j = 0; j < 2*(i+1); ++j) {
			if (j < i + 1) {
				if (first) {
					first = false;
					cout << n;
				}
				else cout << '-' << n;
			}
			else {
				if (j == i + 1) {
					for (int k  = 0; k < first_row; ++k) cout <<'.';
					first_row = first_row - (2*digits + 2);
				}
				if (j == 2*(i + 1) - 1) cout << n;
				else cout << n << '-';
			}
		}
		cout << endl;
	}
}
