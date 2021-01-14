#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct info {
	string key; int value;
};

typedef vector<info> Data;

vector<string> build_vec(int n) {
	vector<string> vec(n);
	for (int i = 0; i < n; ++i) cin >> vec[i];
	return vec;
}

bool compare(info a, info b) {

	if (a.value != b.value) return a.value > b.value;
	return a.key < b.key;
}

void print(const Data& data, int n) {

	for (int i = 0; i < n; ++i) cout << data[i].key << endl;
	cout << "----------" << endl;
}

Data compute(vector<string> vec) {

	Data data;
	int i = 0, counter = 0;
	while (i < vec.size()) {

		string s = vec[i];
		while (i < vec.size() and s == vec[i]) {
			++counter;
			++i;
		}
		info add;
		add.key = s;
		add.value = counter;
		data.push_back(add);
		counter = 0;
	}
	return data;
}

int main() {

	int n, number;
	while (cin >> n >> number) {
		vector<string> vec= build_vec(n);
		sort(vec.begin(), vec.end());
		Data data = compute(vec);
		sort(data.begin(), data.end(), compare);
		print(data, number);
	}
}
