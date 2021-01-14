#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

struct Coord {
	int x; int y;
};

int sum_line(const Matrix& m, int of, int oc, int df, int dc) {
	int x = df-of, y = dc-oc;
	int counter = 0;
	while (x != 0) {
		if (x < 0) {
			++x;
			--of;
			counter += m[of][oc];
		}
		else {
			--x;
			++of;
			counter += m[of][oc];
		}
		
	}
	while (y != 0) {
		if (y < 0) {
			++y;
			--oc;
			counter += m[of][oc];
		}
		else {
			--y;
			++oc;
			counter += m[of][oc];
		}
	}
	return counter;
}

Matrix build_matrix(int rows, int columns) {

	Matrix m(rows, vector<int>(columns));
	for (int i = 0; i < rows; ++i) for (int j = 0; j < columns; ++j) cin >> m[i][j];
	return m;
}

int main() {

	int rows, columns;
	cin >> rows >> columns;
	Matrix m = build_matrix(rows, columns);
	int counter = 0;
	Coord c1, c2;
	c2.x = 0;
	c2.y = 0;
	bool first = true;
	while (cin >> c1.x >> c1.y) {
		if (first) {
			counter += m[c1.x][c1.y];
			first = false;
		}
		else counter += sum_line(m, c2.x, c2.y, c1.x, c1.y);
		c2.x = c1.x;
		c2.y = c1.y;
	}
	cout << "suma = " << counter << endl;
}
