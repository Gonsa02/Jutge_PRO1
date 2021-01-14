#include <iostream>
#include <math.h>
using namespace std;

double factorial(int n) {
	
	if (n == 1 or n == 0) return 1;
	else return n*factorial(n-1);
}

int main() {

	int i;
	while(cin >> i) {

		cout << "With " << i << " term(s) we get ";
		double sum = 0;

		--i;
		if (i+1 == 0 ) sum = 0;
		else if ( i+1 == 1) sum = 1;
		else {

			for (double j = 0; j <= i; ++j) {

				sum += (1/(factorial(j)));
			}
		}

		cout.precision(10);
		cout <<fixed<< sum;
		cout <<'.'<< endl;
	}
}
