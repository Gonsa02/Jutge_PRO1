#include <iostream>
#include <vector>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Rectangle;

void minimal_dimensions(char c, const Rectangle& r, int& rows, int& cols) {

	int min_row, i = 0, j = 0;
	bool found = false;

	while (not found) {

		if (r[i][j] == c) {
			
			min_row = i;
			found = true;

		}

		++j;
		if (j == r[0].size()) {

			++i;
			j = 0;

		}
	}

	found = false;
	int max_row;
	i = r.size()-1;
	j = 0;

	while (not found) {

		if (r[i][j] == c) {
			
			max_row = i;
			found = true;

		}
		++j;
		if (j == r[0].size()) {

			--i;
			j = 0;

		}

	}

	found = false;
	int min_column;
	i = 0;
	j = 0;

	while (not found) {

		if (r[i][j] == c) {
			
			min_column = j;
			found = true;

		}
		++i;
		if (i == r.size()) {

			++j;
			i = 0;

		}

	}

	found = false;
	int max_column;
	i = 0;
	j = r[0].size()-1;

	while (not found) {

		if (r[i][j] == c) {
			
			max_column = j;
			found = true;

		}
		++i;
		if (i == r.size()) {

			--j;
			i = 0;

		}

	}

	rows = max_row-min_row+1;
	cols = max_column-min_column+1;

}
