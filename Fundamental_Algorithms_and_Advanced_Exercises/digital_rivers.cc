#include <iostream>
using namespace std;

int next_river(int n) {

	int next = n;
	while(n != 0) {
		next += n%10;
		n /= 10;
	}

	return next;
}

int encounter_of_rivers(int n) {

	int river1 = 1, river3 = 3, river9 = 9;
	while (n != river1 and n != river3 and n != river9) {
		while(river1 < n) river1 = next_river(river1);
		while(river3 < n) river3 = next_river(river3);
		while(river9 < n) river9 = next_river(river9);
		if (n != river1 and n != river3 and n != river9) n = next_river(n);
	}

	return n;
}

int main() {

	int n;
	cin >> n;
	cout << encounter_of_rivers(n) << endl;
}
