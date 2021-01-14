#include <iostream>
#include <vector>
using namespace std;

int main() {

	int f, c;
	while (cin >> f >> c) {

	//posem una columna i fila mes amb zeros per tenir controlades les cantonades
	vector<vector<int>> camp(f+1, vector<int>(c+1, 0));

	for (int i = 0; i < f; ++i) {

		for (int j = 0; j < c; ++j) {

			cin >> camp[i][j];

		}
	}

	int nc = 0;

	for (int i = 1; i < f+1; ++i) {

		for (int j = 1; j < c+1; ++j) {

			if (camp[i][j] == 0 and camp[i-1][j] == 0 and camp[i][j-1] == 0 and camp[i-1][j-1] !=0) ++nc;
		}	
	}

	cout << nc << endl;
	}
}
