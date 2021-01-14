#include <iostream>
#include <vector>
using namespace std;

int main() {

	char c;

	while (cin >> c) {

		vector<char> table(26);
		table[0] = c;

		int all_characters=26;

		for (int i = 1; i < all_characters; ++i) cin >> table[i];

		int n;
		cin >> n;

		for (int k = 0; k < n; ++k) {

			string text;
			cin >> text;

			for (int i = 0; i < text.size(); ++i) {


				bool found = false;
				int j = 0;

				while (not found) {

					if (table[j] == text[i]) found = true;
					else ++j;

				}

				if (j <= 26) cout << char(j+int('a'));
				else cout << ' ';

			}

			cout << endl;
		}

		cout << endl;
	}
}
