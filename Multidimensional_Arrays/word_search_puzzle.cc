#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector <char> > char_Matrix;
typedef vector< vector <int> > int_Matrix;

char_Matrix create_char_matrix(int rows, int columns) {

	char_Matrix soup(rows, vector<char>(columns));

	for (int i = 0; i < rows; ++i) for(int j = 0; j < columns; ++j) cin >> soup[i][j];

	return soup;

}

int_Matrix create_int_matrix(int rows, int columns) {

	int_Matrix soup_value(rows, vector<int>(columns));

	for (int i = 0; i < rows; ++i) for(int j = 0; j < columns; ++j) cin >> soup_value[i][j];

	return soup_value;

}

int compute(const int_Matrix& v, int i, int j, int start_i, int start_j, int length) {

	int counter = 0;
	for (int k = 0; k < length; ++k) {

		counter += v[i][j];
		i += start_i;
		j += start_j;

	}	

	return counter;

}

bool is(const char_Matrix& c, string s, int i, int j, int start_i, int start_j) {

	int k = 0;
	while (i < c.size() and j < c[0].size() and k < s.size()) {

		if (c[i][j] != s[k]) return false;

		i += start_i;
		j += start_j;
		++k;
	}

	return k == s.size();

}

void procedure(const char_Matrix& c, const int_Matrix& v, const vector<string> s) {


	for (int k = 0; k < s.size(); ++k) {

		bool found_general = false;

		string text = s[k];

		int i = 0;
		
		int counter1=0, counter2=0;

		while (i < c.size()) {

			int j = 0;

			while (j < c[0].size()) {


				if (text[0] == c[i][j]) {

					int aux;

					if (is(c, text, i, j, 0, 1)) {
						
						aux = compute(v, i, j, 0, 1, text.size());
						if (aux > counter1) counter1 = aux;
						found_general = true;

					}
					if (is(c, text, i, j, 1, 0)) {

						aux = compute(v, i, j, 1, 0, text.size());
						if (aux > counter2) counter2 = aux;
						found_general = true;

					}

				}

				++j;
			}

			++i;
		}

		if (found_general) cout << max(counter1,counter2) << endl;
		else cout << "no" << endl;
	}	

}

int main() {

	int rows, columns;
	while (cin >> rows >> columns) {

		char_Matrix soup = create_char_matrix(rows, columns);
		int_Matrix values = create_int_matrix(rows, columns);
	
		int num_search;
		cin >> num_search;
		vector<string> search(num_search);
		for (int i = 0; i < num_search; ++i) cin >> search[i];

		procedure(soup, values, search);
	}

}

