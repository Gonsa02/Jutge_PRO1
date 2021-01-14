#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n;
	cin >> n;

	vector<string> a(n);
	for (int i = 0; i < n; ++i) {	

		cin >> a[i];
	}

	for (int i = n-1; i >= 0; --i) {
	       
		string s = a[i];
		int m = s.size();
		for (int j= m-1; j >= 0; --j) cout << s[j];
		cout << endl;

	}


}
