#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix product(const Matrix& a, const Matrix& b) {

	int rows = a.size();
	int columns_a = a[0].size();
	int columns_b = b[0].size();

	Matrix my_matrix(rows, vector<int>(columns_b, 0));

	for (int i = 0; i < rows; ++i) {

		for (int j= 0; j < columns_b; ++j) {

			for (int k = 0; k < columns_a; ++k) my_matrix[i][j] += a[i][k] * b[k][j];

		}	
	}

	return my_matrix;
}
