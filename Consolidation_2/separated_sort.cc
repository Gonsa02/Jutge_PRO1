#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int n;
	while (cin >> n) {

		vector<int> vec(1);
		vec[0] = n;

		while (n != 0) {

			cin >> n;
			vec.push_back(n);

		}

		sort(vec.begin(), vec.end());

		bool space = false;

		for (int i = 1; i < vec.size(); ++i) {

			if (vec[i] % 2 == 0) {

				if (space) cout << ' ';
				cout << vec[i];
				space = true;
			}
		}

		cout << endl;

		space = false;

		for (int i = vec.size() - 1; i != 0; --i) {

			if (vec[i] % 2 == 1) {

				if (space) cout << ' ';
				cout << vec[i];
				space = true;

			}
		}

		cout << endl;
	}
}
