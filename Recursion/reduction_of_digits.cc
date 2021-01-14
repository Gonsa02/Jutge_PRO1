#include <iostream>
using namespace std;

int sum_of_digits(int x) {
	
	int r = 0;
	while(x > 0) {
		
		r += x % 10;
		x /= 10;
		
	}

	return r;
}

int reduction_of_digits(int x) {

	int s = sum_of_digits(x);
	if (s / 10 != 0) return reduction_of_digits(s);
	else return s;


}

int main () {
	
	int num;
	while (cin>>num) {

		cout << reduction_of_digits(num) << endl;
	}
}
