#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> build_board() {

	vector<vector<int>> b(9, vector<int>(9));
	for (int i = 0; i < 9; ++i) for (int j = 0; j < 9; ++j) cin >> b[i][j];
	return b;
}

bool check_solution(vector<vector<int>> b) {

	int total = 45;

	for (int i = 0; i < b.size(); ++i) {

		int aux = 0, aux2 = 0, aux3 = 0;

		//serveixen per mirar les minimatrius 3x3
		int k = (i/3);
		int p = (i%3);
	
		//aquests vectors ens miraran si estan tots el nombres
		vector<int> v_aux(10,0);
		vector<int> v_aux2(10,0);
		vector<int> v_aux3(10,0);

		for (int j = 0; j < b[0].size(); ++j) {

			//comprovem files
			aux += b[i][j];
			//comprovem columnes
			aux2 += b[j][i];
			//comprovem minimatrius 3x3
			aux3 += b[3*(k)+j/3][3*(p)+j%3];

			++v_aux[b[i][j]];
			++v_aux2[b[j][i]];
			++v_aux3[b[3*(k)+j/3][3*(p)+j%3]];
		}	

		if (aux != total or aux2 != total or aux3 != total) return false;
		for (int z = 1; z < 10; ++z) if (v_aux[z] != 1 or v_aux2[z] != 1 or v_aux3[z] != 1) return false;

		
	}

	return true;
}

int main() {

	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {

		vector<vector<int>> board = build_board();
		if (check_solution(board)) cout << "yes"<<endl;
		else cout << "no" << endl;

	}
}
