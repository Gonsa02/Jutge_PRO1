#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	int n, a;
	cin >> n;

	vector<int> vec(1001);

	for (int i = 0; i < n; ++i) {
	
		cin >> a;
		a = a-1000000000;
		++vec[a];
	}

	for (int i = 0; i < vec.size(); ++i) if(vec[i] != 0) cout << 1000000000 + i << " : " << vec[i] << endl;

}
