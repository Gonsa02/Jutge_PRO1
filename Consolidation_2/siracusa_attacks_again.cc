#include <iostream>
using namespace std;

void converge(int n, int& k, int& far) {

	if (n == 1) far = 1;
	while(n != 1) {

		if (n > far) far = n;
		if (n%2 == 0) n = n/2;
		else n = 3*n +1;
		--k;
	}

}

int main() {

	int m, p, far = 0;
	cin >> m >> p;
	
	for (int i = 1; i <= m; ++i) {

		int k = p;
		converge(i, k, far);
		if (k <= 0) cout << i << endl;

	}

	cout << "The greatest reached number is " << far << '.' << endl;
}
