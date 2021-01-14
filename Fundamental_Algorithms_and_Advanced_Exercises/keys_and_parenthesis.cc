#include <iostream>
#include <vector>
using namespace std;

bool is(const vector<int> battery, int n) {
	if (battery[battery.size()-1] == -n) return true;
	else return false;
}

int convert(char c) {
	if (c == '[') return 1;
	else if (c == '(') return 2;
	else if (c == ']') return -1;
	else if (c == ')') return -2;
	return 0;
}

bool check(string s) {

	vector<int> battery;
	for (int i = 0; i < s.size(); ++i) {
		int num = convert(s[i]);
		if (num > 0) battery.push_back(num);
		else if (num < 0 and battery.size() == 0) return false;
		else {
			if (is(battery, num)) battery.pop_back();
			else return false;
		}
	}	
	if (battery.size() == 0) return true;
	else return false;
}

int main() {

	string s;
	while(cin >> s) {
		bool correct = check(s);
		if (correct) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
