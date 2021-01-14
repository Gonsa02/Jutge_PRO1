#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;
	while (cin >> n) {
	
		vector<int> vec(n); 

		for (int i = 0; i < n; ++i) cin >> vec[i];

		sort(vec.begin(), vec.end());

		bool first = true;
		for (int i = n-1; i >= 0; --i) {
			
			if (not first) cout <<' ';
			first = false;
			cout << vec[i];

		}

		cout << endl;

	}
}
