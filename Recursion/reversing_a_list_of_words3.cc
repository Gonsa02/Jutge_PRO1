#include <iostream>
using namespace std;

void swap (int& n) {

		string x;

		while (cin >> x) {

			swap(n);
			if (n > 0) cout << x << endl;
			--n;

		}
}

int main() {
	
		int n;
		cin >> n;
		swap(n);

}
