#include <iostream>
using namespace std;

int fatten(int n) {

	if (n < 10) return n;
	int a = fatten(n/10);
	int ua = a%10;
	int b = n%10;
	int m = max(ua, b);
	return a * 10+m;
}

int main() {
	
		int n;
		cin >> n;
		cout << fatten(n) << endl;
}
