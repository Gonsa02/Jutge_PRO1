#include <iostream>
#include <cmath>
using namespace std;

void draw(int n) {
	
	if (n == 1) {
		
		cout <<" | " << endl;
		cout <<"-0-" << endl;
		cout <<" | " << endl;

	}

	else {

		draw(n-1);
		
		for(int i = 0; i < pow(3, n-1); ++i) cout << " | ";
		cout << endl;
		for(int i = 0; i < pow(3, n-1); ++i) cout << "-O-";
		cout << endl;
		for(int i = 0; i < pow(3, n-1); ++i) cout << " | ";
		cout << endl;

		draw(n-1);
	}
}

int main() {

	int n;
	cin >> n;
	draw(n);	
}
