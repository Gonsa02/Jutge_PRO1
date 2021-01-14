#include <iostream>
#include <vector>
using namespace std;

bool equal_sum_of_rest(const vector<int>& num, const int& sum) {

	for (int i = 0; i < num.size(); ++i) {
		
		if(sum-num[i] == num[i]) return true;
	}
	
	return false;
}

int main() {
	
	int n;
	
	while (cin >> n) {
		
		vector<int> num(n);
		int sum = 0;

		for (int i = 0; i < n; ++i) {

			cin >> num[i];
			sum += num[i];

		}

		if (equal_sum_of_rest(num,sum)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
