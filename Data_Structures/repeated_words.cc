#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Word {
	string text;
	int times = 0;
	int length = 0;
};

typedef vector<Word> Line;

Line read_line(int n) {

	Line l;
	for (int i = 0; i < n; ++i) {
		string s;
		cin >> s;
		bool found = false;
		int  j = 0;
		while (not found and j < l.size()) {
			if (l[j].text == s) found = true;
			++j;
		}
		if (found) ++l[j-1].times;
		else {
			Word w;
			w.times = 1;
			w.text = s;
			w.length = s.size();
			l.push_back(w);
		}
	}

	return l;
}

bool order(Word w1, Word w2) {

	return w1.times < w2.times;
}

void print(const Line& l) {

	int i = 0, j = 1;
	while (i < l.size()) {
		int sum = 0;
		while(j == l[i].times and i < l.size()) {
			sum += l[i].length;
			++i;
		}
		if (sum != 0) cout << j << " : " << sum << endl;
		++j;
	}
}

int main() {

	int n;
	while (cin >> n) {
		Line l = read_line(n);
		sort(l.begin(), l.end(), order);
		print(l);
		cout << endl;
	}
}
