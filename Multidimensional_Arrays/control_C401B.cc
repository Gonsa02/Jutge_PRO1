#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matrix;

Matrix build_matrix(int rows, int columns, int& max, int& min) {

	Matrix my_matrix(rows, vector<int>(columns));

	for(int i = 0; i < rows; ++i) {

		for(int j = 0; j < columns; ++j) {

			cin >> my_matrix[i][j];
			if (i == 0 and j == 0) {

				max = my_matrix[i][j];
				min = my_matrix[i][j];
			}

		}
	}

	return my_matrix;
}

int main() {

	int rows, columns, max, min, first = 0, counter = 0, result=0;
	while (cin >> rows >> columns) {

		++counter;
		Matrix my_matrix = build_matrix(rows, columns, max, min);

		for (int i = 0; i < my_matrix.size(); ++i) {
			
			for (int j = 0; j < my_matrix[0].size(); ++j) {

				if (my_matrix[i][j] > max) max = my_matrix[i][j];
				if (my_matrix[i][j] < min) min = my_matrix[i][j];
				if (max-min > result) {

					result = max-min;
					first = counter;
				}

			}

		}

	}	
	if (first == 0) first = 1;

	cout << "la diferencia maxima es " << result << endl;
	cout << "la primera matriu amb aquesta diferencia es la " << first << endl;
}
