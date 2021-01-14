#include <iostream>
#include <vector>
using namespace std;

bool is_prime(int n) {
	
	if (n>=2) {
		int i=2;
		bool is_prime = true;
		while (is_prime and i*i <= n) {

			if (n%i==0) is_prime = false;
			++i;
		}
		return is_prime;
	}
	else return false;
}

bool check(vector<int>& num) {

	for (int time = 0; time < num.size(); ++time) {

		for (int i = 0; i < num.size(); ++i) {

			if (time < i) if (is_prime(num[time]+num[i])) return true; 
		
		}
	}

	return false;
}

int main() {

	int n;

	while (cin >> n) {
		
		vector<int> num(n);

		for (int i = 0; i < n; ++i) {

			cin >> num[i];
		}

		if (check(num)) cout << "yes" << endl;
		else cout << "no" << endl;
	}
}
