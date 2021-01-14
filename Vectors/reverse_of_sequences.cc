#include <iostream>
using namespace std;

int main() {
	
	int n;
	
	while (cin >> n) {

		int vec[n];
		
		for (int i = 0; i < n; ++i) {
			
			cin >> vec[i];
		}

		for (int i = n-1; i >= 0; --i) {
			
			cout << vec[i];
			if (i != 0) cout <<' ';
		}

		cout << endl;
	}
}
