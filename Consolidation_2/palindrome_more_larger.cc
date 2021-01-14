#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool is_palindrome(string s) {

	int i = 0, j = s.size()-1;
	bool palindrome = true;

	while (palindrome and i < j) {

		if (s[i] != s[j]) palindrome = false;
		++i;
		--j;

	}

	return palindrome;
}

int main() {

	int n;

	cin >> n;

	while (n != 0) {

		cout << "-----" << endl;

		string text;

		vector<string> vec(0);

		int max = 0;
		bool exist = false;

		for (int i = 0; i < n; ++i) {

			cin >> text;
			bool palindrome = is_palindrome(text);

			if (palindrome) {
				
				if (text.size() > max) max = text.size();
				vec.push_back(text);
				exist = true;

			}

		}


		if (exist) for (int i = 0; i < vec.size(); ++i) if (vec[i].size() == max) cout << vec[i] << endl;
		if (not exist) cout << "cap palindrom" << endl;	

		cin >> n;

	}

	cout << "-----" << endl;
}
