#include <iostream>
#include <vector>
using namespace std;

bool magic_square(const vector<vector<int>>& t) {

	int sum = 0;
	for (int i = 0; i < t[0].size(); ++i) {
		sum += t[0][i];
		if (t[0][i] < 1) return false;
	}

	int aux = 0;

	//mirem files
	for (int i = 1; i < t.size(); ++i) {

		for (int j = 0; j < t[0].size(); ++j) {

			aux += t[i][j];
			if (t[i][j] < 1) return false;

		}

		if (aux != sum) return false;

		aux = 0;
	}

	//mirem columnes
	for (int i = 0; i < t[0].size(); ++i) {

		for (int j = 0; j < t.size(); ++j) {

			aux += t[j][i];
			if (t[j][i] < 1) return false;

		}

		if (aux != sum) return false;

		aux = 0;
	}

	//mirem diagonals
	int aux2 = 0;

	for (int i = 0; i < t.size(); ++i) {

		aux += t[i][i];
		if (t[i][i] < 1) return false;
		aux2 += t[i][t.size()-1-i];
		if (t[i][t.size()-1-i] < 1) return false;

	}

	if (aux != sum or aux2 != sum) return false;

	return true;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> m(n, vector<int>(n));
	for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) cin >> m[i][j];
	cout << magic_square(m);
}
