#include <iostream>
#include <vector>
using namespace std;

int main() {

	char c;

	while (cin >> c) {

		vector<bool> aux(26, false);

		while (c != '.') {

			if (int(c) > 96 and int(c) < 123) aux[int(c)-int('a')] = true;

			else if (int(c) > 64 and int(c) < 91) aux[int(c)-int('A')] = true; 
			cin >> c;

		}

		bool all=true;
		int i = 0;

		while (all and i < 26) {

			if (aux[i] == false) all = false;
			++i;

		}

		if (all) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
