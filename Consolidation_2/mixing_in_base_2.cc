#include <iostream>
using namespace std;

void decompose(int n1, int n2, int& i) {
	
	int b1 = n1, b2 = n2;

	if (i % 2 == 1) {

		 b1 = n1 / 2;

		if (b1 != 0) {
			
			++i;
			decompose(b1, b2, i);

		}
		cout << n1 % 2;

	}
	else {

		b2 = n2 / 2;

		if (b2 != 0) {
			
			++i;
			decompose(b1, b2, i);

		}
		cout << n2 % 2;
	}

}

int main() {

	int n1, n2;

	while (cin >> n1 >> n2) {

		int i = 0;
		if (n1 == 0) cout <<'0';
		else cout <<'1';
		decompose(n1, n2, i);
		cout << endl;

	}
}
