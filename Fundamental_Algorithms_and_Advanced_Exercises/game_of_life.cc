#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Matrix;

void read_matrix(Matrix& m) {
	for (int  i = 0; i < m.size(); ++i) for (int j = 0; j < m[0].size(); ++j) cin >> m[i][j];
}

int count_bacterys(const Matrix& now, int x, int y) {

	int c = 0;
	for (int i = -1; i < 2; ++i) {
		for (int j = -1; j < 2; ++j) {
			int pos_x = x+i, pos_y = y+j;
			if (pos_x >= 0 and pos_y >= 0 and pos_x < now.size() and pos_y < now[0].size()) if (now[pos_x][pos_y] == 'B' and (i != 0 or j != 0)) ++c;
		}
	}

	return c;
}

void evaluate_cell(const Matrix& now, Matrix& next, int x, int y) {

	int near = count_bacterys(now,x,y);
	if ((now[x][y] == '.' and near == 3) or (now[x][y] == 'B' and (near == 2 or near == 3))) next[x][y] = 'B';
}

int main() {

	int r, c;
	bool first = true;
	while(cin >> r >> c and (r != 0 or c != 0)) {

		Matrix board(r, vector<char>(c));
		read_matrix(board);
		Matrix next_board (r, vector<char>(c, '.'));
		if (first) first = false;
		else cout << endl;
		for (int i = 0; i < board.size(); ++i) {
			for (int j = 0; j < board[0].size(); ++j) {
				evaluate_cell(board, next_board, i, j);
				cout << next_board[i][j];
			}
			cout << endl;
		}

	}
}
