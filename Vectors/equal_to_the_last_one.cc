#include <iostream>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	int vec[n];
	
	for (int i = 0; i < n; ++i) {
		
		cin >> vec[i];

	}

	int counter = 0;

	for (int i = 0; i < n-1; ++i) {

		if (vec[n-1] == vec[i]) ++counter;
	}	

	cout << counter << endl;

}
