#include <iostream>
#include <vector>
using namespace std;

char most_frequent_letter(const string& s) {

	const int LENGTH_ALPHABET = 'z' - 'a' + 1;

	vector<int> vec(LENGTH_ALPHABET);

	for (int i = 0; i < s.size(); ++i) {
		
		++vec[int(s[i])-97];

	}
	
	int times = 0, position=0;

	for (int i = 0; i < LENGTH_ALPHABET; ++i) {
		
		if (vec[i] > times) {
			
			times = vec[i];
			position = i;

		}
	}

	return char(position + 97);
}

int main() {
	
	int n, number_char=0;
	cin >> n;

	vector<string> s(n);

	for (int i = 0; i < n; ++i) {

		cin >> s[i];
		number_char += s[i].size();

	}

	double average = double(number_char)/double(n);
	cout.setf(ios::fixed);
	cout.precision(2);

	cout << average << endl;

	for (int i = 0; i < n; ++i) {
		
		if (s[i].size() >= average) cout << s[i] << ": "<<  most_frequent_letter(s[i]) << endl;

	}
}
