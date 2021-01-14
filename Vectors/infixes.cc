#include <iostream>
#include <vector>
using namespace std;

bool contain(string s1, string s2) {

	int i = 0;
	bool found = (s1.size() == 0);
	int n = s2.size()-s1.size();

	while(not found and i <= n) {

		int j = 0;
		bool its = true;

		while (its and j < s1.size()) {

			its = (s1[j] == s2[i+j]);
			++j;
		}

		if (its) found = true;
		else ++i;
	}
	if (found) return true;
	else return false;
}

int main() {

	int n;
	cin >> n;
	vector<string> s(n);
	
	for (int i = 0; i < n; ++i) cin >> s[i];
	for (int i = 0; i < n; ++i) {

		cout << s[i] <<':';
		for (int j = 0; j < n; ++j) {


			if (contain(s[j],s[i])) cout << ' ' << s[j]; 

		}

		cout << endl;
	}
}
