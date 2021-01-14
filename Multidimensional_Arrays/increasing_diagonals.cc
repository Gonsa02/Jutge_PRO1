#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

Matrix build_matrix(int rows, int columns) {

	Matrix my_matrix(rows, vector<int>(columns));

	for(int i = 0; i < rows; ++i) {

		for(int j = 0; j < columns; ++j) {

			cin >> my_matrix[i][j];

		}
	}

	return my_matrix;
}

bool grows(const Matrix& my_matrix, int x, int y, int start_x, int start_y) {

	while ((x+start_x) >= 0 and (x+start_x) < my_matrix.size() and (y+start_y) >= 0 and (y+start_y) < my_matrix[0].size()) {

		if (my_matrix[x+start_x][y+start_y] <= my_matrix[x][y]) return false;

		x += start_x;
		y += start_y;

	}

	return true;
}

bool check(const Matrix& my_matrix, const int x, const int y) {

	if (grows(my_matrix, x, y, -1, -1) and grows(my_matrix, x, y, -1, 1) and grows(my_matrix, x, y, +1, +1) and grows(my_matrix, x, y, +1, -1)) return true;
	else return false;
}

int main() {

	int rows, columns;
	while (cin >> rows >> columns) {

	Matrix my_matrix = build_matrix(rows, columns);

	int x, y;
	cin >> x >> y;
	if (check(my_matrix, x, y)) cout << "yes" << endl;
	else cout << "no" <<endl;

	}
}
