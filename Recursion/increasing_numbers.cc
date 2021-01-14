#include <iostream>
using namespace std;

bool is_increasing(int n) {

		if (n<10) {
			//nomes te un digit, cas trivial
			return true;
		}
		else {
			return (n%10 >= (n/10)%10) and is_increasing(n/10);
		}
}

int main() {
	
	int num;
	cin >> num;
	cout << is_increasing(num);
}
