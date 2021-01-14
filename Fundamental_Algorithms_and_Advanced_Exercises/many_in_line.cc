#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<vector<int>>> Cube;
typedef vector<vector<vector<bool>>> Cube_check;

Cube read_cube(int n) {
	Cube c (n, vector<vector<int>>(n, vector<int>(n)));
	for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) for (int k = 0; k < n; ++k) cin >> c[i][j][k];
	return c;
}

void evaluate_number(const Cube& c, const Cube_check& check, int n, int size, int x, int y, int z, int px, int py, int pz, int number, vector<int>& counter) {

	int moviments = 0;
	bool finish = false;
	x += px;
	y += py;
	z += pz;
	while(not finish and moviments < n and x >= 0 and y >= 0 and z >= 0 and x < size and y < size and z < size) {
		if (c[x][y][z] != number or check[x][y][z] == true) finish = true;
		else {
			++counter[moviments];
			++moviments;
			x += px;
			y += py;
			z += pz;	
		}
	}
}

void pointer(const Cube& c, Cube_check& check, int n, int size, int x, int y, int z, vector<int>& counter) {


	for (int i = -1; i < 2; ++i) for (int j = -1; j < 2; ++j) for (int k = -1; k < 2; ++k) if (i != 0 or j != 0 or k != 0) evaluate_number(c, check, n, size, x, y, z, i, j, k, c[x][y][z], counter);
	check[x][y][z] = true;

}

vector<int> evaluate(const Cube& c, int n, int size) {
	vector<int> counter(size, 0);

	Cube_check check(size, vector<vector<bool>>(size, vector<bool>(size, false)));
	for (int i = 0; i < size; ++i) for (int j = 0; j < size; ++j) for (int k = 0; k < size; ++k) pointer(c, check, n, size, i, j, k, counter);

	return counter;
}


int main() {
	int n;
	bool space = false;
	while (cin >> n) {
		Cube c = read_cube(n);
		if (space) cout << endl;
		space = true;
		vector<int> counter = evaluate(c, n-1, c.size());
		for (int i = 0; i <= n-2; ++i) {
			cout << "Ratlles de mida " << i+2 << ": " << counter[i] << endl;
		}
	}
}
