#include <iostream>
#include <vector>
using namespace std;

bool is_anagram(const vector<char>& c1, const vector<char>& c2) {

	vector<int> value_c1(25);
	vector<int> value_c2(25);

	for (int i = 0; i < c1.size(); ++i) {

		++value_c1[int(c1[i])-65];
	}

	for (int i = 0; i < c2.size(); ++i) {

		++value_c2[int(c2[i])-65];
	}

	int i = 0;
	bool anagram = true;

	while (anagram and i < 25) {

		if (value_c1[i] != value_c2[i]) anagram = false;
		++i;

	}

	return anagram;
}

vector<char> build_char_vector() {

	char c;
	cin >> c;

	vector<char> c_vec;

	while (c != '.') {

		if (int(c) >= 65 and int(c) <= 90) c_vec.push_back(c);
		else if (int(c) >= 97 and int(c) <= 122) c_vec.push_back(char(int(c)-32));
		cin >> c;

	}

		return c_vec;

}

int main() {

	int n;
	cin >> n;
	
	for (int i = 0; i < n; ++i) {


		vector<char> c1 = build_char_vector();
		vector<char> c2 = build_char_vector();

		if (is_anagram(c1, c2)) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
}
