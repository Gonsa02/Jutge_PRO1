#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <int> >Matrix;

Matrix product(const Matrix& a, const Matrix& b) {
	int k = a.size();
	Matrix c(k, vector <int>(k, 0));
	for (int i = 0; i < k; ++i) {
		for (int j = 0; j < k; ++j) {
			for (int l = 0; l < k; ++l) c[i][j] += a[i][l] * b[l][j];
		}
	}
	return c;
}
