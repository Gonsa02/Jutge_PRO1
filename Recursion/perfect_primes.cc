#include <iostream>
using namespace std;

int sum_of_digits(int n) {
	
		int r=0;
		while (n > 0) {
			
				r += n%10;
				n /= 10;

		}
		return r;
}

bool is_prime(int n) {
	
		if (n<2) return false;

		for(int i = 2; i*i <= n; ++i) {

				if (n%i == 0) return false;

		}
		return true;

}

bool is_perfect_prime(int n) {

		while (n > 10) {

			if (not is_prime(n)) return false;
			n = sum_of_digits(n);

		}	
		if (is_prime(n)) return true;
		else return false;
}

int main() {
	
		int n;
		cin >> n;
		cout << is_perfect_prime(n) <<endl;

}
