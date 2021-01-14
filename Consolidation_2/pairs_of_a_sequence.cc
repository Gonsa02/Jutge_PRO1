#include <iostream>
using namespace std;

int main() {

	int n;

	while (cin >> n) {

		bool odd = false, even = false;
		int num;

		for (int i = 0; i < n; ++i) {

			cin >> num;

			if (num%2 == 0) even = true;
			else if (num%2 != 0)  odd = true;

		}

		if ((even and odd)) cout << "yes" << endl;
		else cout << "no" << endl;

	}
}
