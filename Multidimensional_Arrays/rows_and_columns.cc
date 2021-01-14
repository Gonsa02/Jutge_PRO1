#include <iostream>
#include <vector>
using namespace std;

int main() {

	int rows, columns;
	cin >> rows >> columns;

	typedef vector< vector<int> > Matrix;

	Matrix my_matrix(rows, vector<int>(columns));

	for (int i = 0; i < rows; ++i) {

		for (int j = 0; j < columns; ++j) {

			cin >> my_matrix[i][j];

		}
	}

	string operation;

	while (cin >> operation) {

		if (operation == "row") {

			int row;
			cin >> row;
			--row;
			cout << "row "<< row+1 << ':';
			for (int j = 0; j < columns; ++j) cout << ' ' << my_matrix[row][j]; 
			cout << endl;

		}

		else if (operation == "column") {

			int column;
			cin >> column;
			--column;
			cout << "column "<< column+1 << ':';
			for (int i = 0; i < rows; ++i) cout << ' ' << my_matrix[i][column]; 
			cout << endl;

		}

		else {

			int num1, num2;
			cin >> num1 >> num2;
			--num1;
			--num2;
			cout << "element " << num1 +1 << ' ' << num2+1 <<": " << my_matrix[num1][num2] << endl;

		}
	}	
}
